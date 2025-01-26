/*!
 * @file ArduinoCode.h
 */

#ifndef BB_H
#define BB_H

//LIBRARIES
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SPI.h>
#include <MFRC522.h>
#include <Keypad.h>
#include <Key.h>

//PIN DEFINITIONS
#define INPUT_KEYSWITCH 13
#define RFID_SDA_PIN 53
#define RFID_RESET_PIN 49
#define RFID_MOSI 51
#define RFID_MISO 50
#define RFID_SCK 52

//ROW = YELLOW
//COL = BLUE
#define KP_ROW_1 37
#define KP_ROW_2 35
#define KP_ROW_3 33
#define KP_ROW_4 31
#define KP_COL_1 29
#define KP_COL_2 27
#define KP_COL_3 25
#define KP_COL_4 23

//VARIABLE DEFINITIONS
#define BAUDRATE 115200
#define HANDSHAKE_OUT "HANDSHAKEARD"
#define HANDSHAKE_RETURN "HANDSHAKEUE"

//CONSTANTS
const byte KP_ROWS = 4;  //four rows
const byte KP_COLS = 4;  //four columns


const char KP_Keys[KP_ROWS][KP_COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};
const int LCD_COLS = 20;
const int LCD_ROWS = 4;

//GLOBALS
bool UEConnected = false;
byte KP_rowPins[KP_ROWS] = { KP_ROW_1, KP_ROW_2, KP_ROW_3, KP_ROW_4 };  //connect to the row pinouts of the keypad
byte KP_colPins[KP_COLS] = { KP_COL_1, KP_COL_2, KP_COL_3, KP_COL_4 };  //connect to the column pinouts of the keypad


//CLASS SETUPS
LiquidCrystal_I2C lcd(0x27, LCD_COLS, LCD_ROWS);  // LCD2004 (i2C ADDRESS, COLS, ROWS)
MFRC522 rfid(RFID_SDA_PIN, RFID_RESET_PIN);       // Instance of the class
MFRC522::MIFARE_Key RFID_key;
Keypad KP_keypad = Keypad(makeKeymap(KP_Keys), KP_rowPins, KP_colPins, KP_ROWS, KP_COLS);

#endif  // BB_H