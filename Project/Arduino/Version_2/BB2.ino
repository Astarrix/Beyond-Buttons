#include "BB.h"

void setup() {
  Serial.begin(BAUDRATE);
  while (!Serial) {}  // Makes sure serial port is initialised and open

  Pins_Init();
  LCD_Init();
  ToggleLCDActive(!digitalRead(KS_4));
  RFID_Init();
  Serial.println(HANDSHAKE_OUT);
}

void Pins_Init() {
  pinMode(INPUT_KEYSWITCH, INPUT);
  KP_keypad.pin_mode(KP_ROW_1, INPUT);
  KP_keypad.pin_mode(KP_ROW_2, INPUT);
  KP_keypad.pin_mode(KP_ROW_3, INPUT);
  KP_keypad.pin_mode(KP_ROW_4, INPUT);
  KP_keypad.pin_mode(KP_COL_1, INPUT);
  KP_keypad.pin_mode(KP_COL_2, INPUT);
  KP_keypad.pin_mode(KP_COL_3, INPUT);
  KP_keypad.pin_mode(KP_COL_4, INPUT);
  pinMode(KS_4, INPUT_PULLUP);
  pinMode(KS_3, INPUT_PULLUP);
  pinMode(KS_2, INPUT_PULLUP);
  pinMode(KS_1, INPUT_PULLUP);
}

void loop() {
  while (!UEConnected) {  // HANDSHAKE LOOP
    if (Serial.available() > 0) {
      String _read = Serial.readStringUntil('\n');
      _read.trim();
      if (_read.equals(HANDSHAKE_RETURN)) {
        UEConnected = true;
        digitalWrite(LED_BUILTIN, HIGH);
      }
    }
  }

  RecieveInput();  // Recieve input from the serial port
  RFID_Read();     // check for anything on the RFID reader
  PollOutputs();   // check for any pushed buttons
  //Serial.println("1: " + String(!digitalRead(KS_0)));
  //Serial.println("2: " + String(!digitalRead(KS_1)));
}

void RecieveInput() {
  String _read = "";
  if (Serial.available() > 0) {
    _read = Serial.readStringUntil('\n');
    _read.trim();
  }
  if (!_read.equals("")) {
    char commandType = _read[0];
    _read.remove(0, 1);
    switch (commandType) {
      case 'L':  //LCD COMMAND - FORMAT: L[Clear][Cursor][DisplayOn][2 bit Row][Text] - L15HelloWorld
        {
          int _LCDFormatting = _read.substring(0, 2).toInt();
          _read.remove(0, 2);
          if (!digitalRead(KS_4)) {
            LCD_Formatting(_LCDFormatting);
            LCD_WriteLine(_LCDFormatting >> 3, _read);
          }

          break;
        }
    }
  }
}

void LCD_Formatting(int FormatCode) {
  /*
  BIT_1 = CLEAR DISPLAY
  BIT_2 = CURSOR ON
  BIT_3 = BACKLIGHT ON
  BIT_4 & BIT_5 = ROW
  */

  if (bitRead(FormatCode, 0)) { lcd.clear(); }
  if (bitRead(FormatCode, 1)) {
    lcd.blink_on();
    lcd.cursor_on();
  } else {
    lcd.blink_off();
    lcd.cursor_off();
  }
  if (bitRead(FormatCode, 2)) {
    lcd.noBacklight();
  } else {
    lcd.backlight();
  }
}

void LCD_WriteLine(int row, String text) {
  lcd.setCursor(0, row);
  lcd.print("                    ");
  lcd.setCursor(0, row);
  lcd.print(text);
}

void LCD_Init() {
  lcd.init();
  lcd.begin(20, 4);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.clear();
  lcd.cursor_on();
  lcd.blink_on();
}

void RFID_Init() {
  SPI.begin();
  rfid.PCD_Init(RFID_SDA_PIN, RFID_RESET_PIN);

  for (byte i = 0; i < 6; i++) {
    RFID_key.keyByte[i] = 0xFF;
  }
}

void RFID_Read() {
  if (rfid.PICC_IsNewCardPresent())  // RFID Card Detected
  {
    if (rfid.PICC_ReadCardSerial()) {  // Can RFID be read

      // Check is the PICC of Classic MIFARE type
      MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
      if (!(piccType != MFRC522::PICC_TYPE_MIFARE_MINI && piccType != MFRC522::PICC_TYPE_MIFARE_1K && piccType != MFRC522::PICC_TYPE_MIFARE_4K)) {  // Is RFID Type a readable one (usually yes)

        //Print out detected RFID UID
        Serial.print("R-");
        printByteBufferAsHex(rfid.uid.uidByte, rfid.uid.size);

      } else {  // RFID Type was not a readable one
        Serial.println(F("RFID_ERROR: NOT MIFARE TYPE"));
      }
      rfid.PICC_HaltA();       // Stops attempting to read the data
      rfid.PCD_StopCrypto1();  // Stops binding to previously read card
    }
  }
}

void printByteBufferAsHex(byte *buffer, byte bufferSize) {
  for (byte i = 0; i < bufferSize; i++) {
    Serial.print(buffer[i] < 0x10 ? "0" : "");
    Serial.print(buffer[i], HEX);
  }
  Serial.println();
}

void PollOutputs() {
  char _key = KP_keypad.getKey();
  if (_key) {
    Serial.print("K-");
    Serial.println(_key);
  }

  if (bitRead(KS_States, 4) != !digitalRead(KS_4)) {
    KeySwitch(4, !digitalRead(KS_4));
    ToggleLCDActive(!digitalRead(KS_4));
  }
  if (bitRead(KS_States, 3) != !digitalRead(KS_3)) {
    KeySwitch(3, !digitalRead(KS_3));
  }
  if (bitRead(KS_States, 2) != !digitalRead(KS_2)) {
    KeySwitch(2, !digitalRead(KS_2));
  }
  if (bitRead(KS_States, 1) != !digitalRead(KS_1)) {
    KeySwitch(1, !digitalRead(KS_1));
  }
}

void KeySwitch(int ID, bool isActive) {
  bitWrite(KS_States, ID, isActive);
  Serial.print("S-" + String(ID) + ":");
  Serial.println(isActive);
}

void ToggleLCDActive(bool isActive) {
  if (isActive) {
    lcd.backlight();
  } else {
    lcd.noBacklight();
    lcd.clear();
    lcd.noCursor();
    lcd.noBlink();
  }
}