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
  while (!bCONNECTED) {
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
  HandleInput();
  if (!hasExploded) {
    if (m_BombTimerRemaining > 0) {
      ShowCount(m_BombTimerRemaining);
      if (((millis() / 100) % 10 == 0) && m_BombTimerRemaining < WARNINGTIME) {
        BeepBuzzer(AUDIO_ACTIVE);
      }
    } else {
      hasExploded = true;
      BeepBuzzer(AUDIO_ACTIVE);
    }
  } else {
    ShowCount(0);
  }
}

void GameSetup() {
  gameSetup = true;
  hasExploded = false;
  gameStartTime = millis();
}

void HandleInput() {
  String _read;
  if (Serial.available() > 0) {
    _read = Serial.readString();
    _read.trim();
  }

  switch (char(_read[0])) {                                   // switch on first character of received string
    case 'p':                                                 // printer commands
      _read.remove(0, 1);                                     // removes command key
      byte formatting = byte(_read.substring(0, 2).toInt());  // first two characters after p command dictate formatting using bit shifting - 0-63
      String text = _read.substring(2);
      PrintOnPrinter(formatting, text);
      break;
    case 'c':              // general commands
      _read.remove(0, 1);  // removes command key
      if (_read.equals(TERMINATEKEY)) {
        bCONNECTED = false;
        setup();
      }
      break;
    default:

      break;
  }
}



void DigitalTube_MSBFIRST(int position, byte value) {
  digitalWrite(SSEG_LATCH_PIN, LOW);
  shiftOut(SSEG_DATA_PIN, SSEG_CLOCK_PIN, MSBFIRST, 0x01 << position);
  shiftOut(SSEG_DATA_PIN, SSEG_CLOCK_PIN, MSBFIRST, value);
  digitalWrite(SSEG_LATCH_PIN, HIGH);
}

void ShowCount(int value) {
  DigitalTube_MSBFIRST(0, segNums[value % 10000 / 1000]);
  delay(1);
  DigitalTube_MSBFIRST(1, segNums[value % 1000 / 100]);
  delay(1);
  DigitalTube_MSBFIRST(2, segNums[value % 100 / 10]);
  delay(1);
  DigitalTube_MSBFIRST(3, segNums[value % 10]);
  delay(1);
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