/*!
 * @file ArduinoCode.h
 */

#ifndef BB_H
#define BB_H

//LIBRARIES
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

//GLOBALS
bool UEConnected = false;

//CONSTANTS

//PIN DEFINITIONS
#define pKEYSWITCH 13

//VARIABLE DEFINITIONS
#define BAUDRATE 9600
#define HANDSHAKE_OUT "HANDSHAKEARD"
#define HANDSHAKE_RETURN "HANDSHAKEUE"

//CLASS SETUPS
LiquidCrystal_I2C lcd(0x27,20,4); //(i2C ADDRESS, COLS, ROWS)


#endif  // BB_H