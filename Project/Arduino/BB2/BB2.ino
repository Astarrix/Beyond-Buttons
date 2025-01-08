#include "BB.h"

void setup() {
  Serial.begin(BAUDRATE);
  while (!Serial) {}  // Makes sure serial port is initialised and open

  initPins();
  LCD_Init();
  Serial.println(HANDSHAKE_OUT);
}

void initPins() {
  pinMode(pKEYSWITCH, INPUT);
}



void loop() {
  while (!UEConnected) {
    if (Serial.available() > 0) {
      String _read = Serial.readStringUntil('\n');
      _read.trim();
      if (_read.equals(HANDSHAKE_RETURN)) {
        UEConnected = true;
        digitalWrite(LED_BUILTIN, HIGH);
      }
    }
  }
  if (digitalRead(pKEYSWITCH)) {
    RecieveInput();
  } else {
    if (Serial.available() > 0) { Serial.read(); }
  }
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
          LCD_Formatting(_LCDFormatting);
          LCD_WriteLine(_LCDFormatting >> 3, _read);
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