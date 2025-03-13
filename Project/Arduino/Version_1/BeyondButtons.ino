#include "BeyondButtons.h"

void setup() {

  Serial.begin(BAUDRATE);
  while (!Serial)  // Makes sure serial port is initialised and open
    ;
  Serial.println(HANDSHAKEOUT);
  PrinterSerial.begin(BAUDRATE);
  InitPins();
  //RawInitPrinter();
  printer.begin();
  bCONNECTED = false;
  
}

void InitPins() {

  pinMode(BTN_Yellow, INPUT);       // 2
  pinMode(BTN_Blue, INPUT);         // 3
  pinMode(BTN_Green, INPUT);        // 4
  pinMode(BTN_Red, INPUT);          // 5
  pinMode(PWM_LED, OUTPUT);         // 6
  pinMode(BUZZER_PIN, OUTPUT);      // 7
  pinMode(PRINTER_TX_PIN, OUTPUT);  // 10
  pinMode(SSEG_LATCH_PIN, OUTPUT);  // 11
  pinMode(SSEG_CLOCK_PIN, OUTPUT);  // 12
  pinMode(SSEG_DATA_PIN, OUTPUT);   // 13

  digitalWrite(PWM_LED, LOW);
  digitalWrite(BUZZER_PIN, LOW);
}

void loop() {
  while (!bCONNECTED) {                                               // HANDSHAKE
    if (Serial.available() > 0) {                                     // Is something on the serial waiting to be read
      String _read = Serial.readStringUntil('\n');                    // read it in
      _read.trim();                                                   // clear any whitespace & CR-LF
      if (_read == String(HANDSHAKERETURN) && bCONNECTED == false) {  // if its the handshake string (removes noise)
        bCONNECTED = true;                                            // proceed with main code
      }
    }
  }

  RecieveInput();  // recieves data from UE
  DisplayVisuals();  // for 7SEG display
}



void RecieveInput() {  // takes in strings and uses the first character as the type of command, and then uses the rest of the string as params
  String _read = "";
  if (Serial.available() > 0) {
    _read = Serial.readStringUntil('\n');
    _read.trim();
    BeepBuzzer(DEBUG_ACTIVE);
  }
  if (!_read.equals("")) {
    char commandChar = char(_read[0]);  // switch on first character of received string
    _read.remove(0, 1);
    switch (commandChar) {
      case 'p':  // printer commands
        {
          byte formatting = byte(_read.substring(0, 2).toInt());  // first two characters after p command dictate formatting using bit shifting - 0-63
          String text = _read.substring(2);                       // get the text that wants printing (everything after the 2nd index)
          PrintOnPrinter(formatting, text);
          break;
        }
      case 'c':  // general commands
        {
          if (_read.equals(TERMINATEKEY)) {  // terminate game, disconnect

            delay(10);
            Serial.end();
          }
          break;
        }
      case 't':  // Timer Commands - Format = t100 (100 to be displayed on timer)
        {
          SSEG_Time = _read.toInt();  // saves time to int that is read into SSEG on tick
          break;
        }
      case 'b':  // buzzer commands - Format = b
        {
          BeepBuzzer(AUDIO_ACTIVE);
          break;
        }
      case 'i':  //sends inputs on request
        {
          SendInputs();  // sends current button data
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

  bitWrite(PackagedData, 0, !digitalRead(BTN_Yellow));
  bitWrite(PackagedData, 1, !digitalRead(BTN_Blue));
  bitWrite(PackagedData, 2, !digitalRead(BTN_Green));
  bitWrite(PackagedData, 3, !digitalRead(BTN_Red));
  String Str_Pack = String(PackagedData);
  Str_Pack.trim();
  Serial.println("i" + Str_Pack);
}

void ShowCount(int value) {  // Most Significant Bit first bit shifting written into buffer
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
    digitalWrite(BUZZER_PIN, 100);  // Turn on Buzzer
  }

  digitalWrite(PWM_LED, HIGH);
  delay(100);
  digitalWrite(BUZZER_PIN, LOW);  // Turn off Buzzer
  digitalWrite(PWM_LED, LOW);
}