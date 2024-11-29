#include "BeyondButtons.h"

void setup() {
  Serial.begin(BAUDRATE);
  PrinterSerial.begin(BAUDRATE);

  while (!Serial)  // Makes sure serial port is initialised
    ;
  InitPins();
  RawInitPrinter();
  Serial.println(HANDSHAKEOUT);
  gameSetup = false;
}

void InitPins() {
  pinMode(SSEG_LATCH_PIN, OUTPUT);
  pinMode(SSEG_CLOCK_PIN, OUTPUT);
  pinMode(SSEG_DATA_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(PWM_LED, OUTPUT);

  digitalWrite(PWM_LED, LOW);
  digitalWrite(BUZZER_PIN, LOW);
}

void loop() {
  while (!bCONNECTED) {  // HANDSHAKE
    if (Serial.available() > 0) {
      String _read = Serial.readString();
      _read.trim();
      if (_read == String(HANDSHAKERETURN) && bCONNECTED == false) {
        bCONNECTED = true;
      }
    }
  }

  if (!gameSetup) {
    GameSetup();
  }

  SendInputs();
  RecieveInput();
  DisplayVisuals();
}

void GameSetup() {
  gameSetup = true;
  gameStartTime = millis();
}

void RecieveInput() {
  String _read = "";
  if (Serial.available() > 0) {
    _read = Serial.readString();
    _read.trim();
  }
  if (!_read.equals("")) {
    char commandChar = char(_read[0]);  // switch on first character of received string
    switch (commandChar) {
      case 'p':  // printer commands
        {
          _read.remove(0, 1);                                     // removes command key
          byte formatting = byte(_read.substring(0, 2).toInt());  // first two characters after p command dictate formatting using bit shifting - 0-63
          String text = _read.substring(2);                       // get the text that wants printing (everything after the 2nd index)
          PrintOnPrinter(formatting, text);
          break;
        }
      case 'c':  // general commands
        {
          _read.remove(0, 1);                // removes command key
          if (_read.equals(TERMINATEKEY)) {  // terminate game, disconnect
            bCONNECTED = false;
            setup();
          }
          break;
        }
      case 't':  // Timer Commands - Format = t100 (100 to be displayed on timer)
        {
          _read.remove(0, 1);         // removes command key
          SSEG_Time = _read.toInt();  // saves time to int that is read into SSEG on tick
          break;
        }
      case 'b':  // buzzer commands - Format = b
        {
          _read.remove(0, 1);  // removes command key
          BeepBuzzer(AUDIO_ACTIVE);
          break;
        }
      default:
        {
          Serial.println("INVALID COMMAND");
          break;
        }
    }
    _read = "";
  }
}

void DigitalTube_MSBFIRST(int position, byte value) {
  digitalWrite(SSEG_LATCH_PIN, LOW);
  shiftOut(SSEG_DATA_PIN, SSEG_CLOCK_PIN, MSBFIRST, 0x01 << position);
  shiftOut(SSEG_DATA_PIN, SSEG_CLOCK_PIN, MSBFIRST, value);
  digitalWrite(SSEG_LATCH_PIN, HIGH);
}

void SendInputs() {
  int PackagedData = 0;
  if (!digitalRead(BTN_Yellow)) { bitSet(PackagedData, 0); }
  if (!digitalRead(BTN_Blue)) { bitSet(PackagedData, 1); }
  if (!digitalRead(BTN_Green)) { bitSet(PackagedData, 2); }
  if (!digitalRead(BTN_Red)) { bitSet(PackagedData, 3); }
  if (1 != 0) { Serial.println("b" + String(PackagedData)); };
}

void ShowCount(int value) {
  DigitalTube_MSBFIRST(0, segNums[value % 10000 / 1000]);
  //delay(1);
  DigitalTube_MSBFIRST(1, segNums[value % 1000 / 100]);
  //delay(1);
  DigitalTube_MSBFIRST(2, segNums[value % 100 / 10]);
  //delay(1);
  DigitalTube_MSBFIRST(3, segNums[value % 10]);
  //delay(1);
}

void DisplayVisuals() {
  if (SSEG_Time > -1) {
    ShowCount(SSEG_Time);
  } else if (SSEG_Time = -1) {
    DigitalTube_MSBFIRST(0, 0);
    delay(1);
    DigitalTube_MSBFIRST(1, 0);
    delay(1);
    DigitalTube_MSBFIRST(2, 0);
    delay(1);
    DigitalTube_MSBFIRST(3, 0);
    delay(1);
    SSEG_Time = -2;
  }
}

void BeepBuzzer(bool isLoud) {
  if (isLoud) {
    digitalWrite(BUZZER_PIN, HIGH);  // Turn off Buzzer
  }

  digitalWrite(PWM_LED, HIGH);
  delay(100);
  digitalWrite(BUZZER_PIN, LOW);  // Turn on Buzzer
  digitalWrite(PWM_LED, LOW);
}