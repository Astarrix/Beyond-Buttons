/*!
 * @file ArduinoCode.h
 */

#ifndef BEYONDBUTTONS_H
#define BEYONDBUTTONS_H

//Libraries
#include "Adafruit_Thermal.h"
#include "SoftwareSerial.h"

// Global Variables
bool bCONNECTED = false;
byte segNums[] = { 0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8,    //0-7
                   0x80, 0x90, 0x88, 0x83, 0xc6, 0xa1, 0x86, 0x8e };  //8-F
int gameStartTime;
bool gameSetup = false;
int SSEG_Time = -1;

//PIN Definitions

// 1
#define BTN_Yellow 2
#define BTN_Blue 3
#define BTN_Green 4
#define BTN_Red 5
#define PWM_LED 6     // MANDATORY
#define BUZZER_PIN 7  // MANDATORY
// 8
// 9
#define PRINTER_TX_PIN 10  // Arduino transmit - labeled RX on printer // NON-MANDATORY
#define SSEG_DATA_PIN 11   // MANDATORY
#define SSEG_LATCH_PIN 12  // MANDATORY
#define SSEG_CLOCK_PIN 13  // MANDATORY

//VARIABLE Definitions
#define BAUDRATE 9600
#define HANDSHAKEOUT "HANDSHAKEARD"    // What Arduino Sends for Unreal Engine to Recieve
#define HANDSHAKERETURN "HANDSHAKEUE"  // What Arduino is Expecting to recieve
#define TERMINATEKEY "TERMINATE"       // The String required to disconnect
#define AUDIO_ACTIVE true
#define DEBUG_ACTIVE false


//Conditional Macros
#if DEBUGACTIVE == true
#define DebugPrint(x) Serial.print(x)
#define DebugPrintln(x) Serial.println(x)
#else
#define DebugPrint(x)
#define DebugPrintln(x)
#endif

//Class Setups
SoftwareSerial PrinterSerial(99, PRINTER_TX_PIN);  // Declare SoftwareSerial obj first
Adafruit_Thermal printer(&PrinterSerial);          // Pass addr to printer constructor


/*!
* @brief Prints to connected printer with formatting options
* @param Format 6 bit byte dictating styles, consult function for style guide
* @param text text to print
*
*   FORMATTING STYLES : 6 BIT-BYTE
*
*   1 - justification - 0 = Left / 1 = Center
*   2 - bold - 0 = Off / 1 = On
*   4 - size - 0 = Small / 1 = Large
*   8 - double width - 0 = Off / 1 = On
*   16 - inverse - 0 = Off / 1 = On
*   32 - double height 0 = Off / 1 = On
*/
void PrintOnPrinter(byte Format, String text, int AutoFeed = 2);

/*!
* @brief Initialises the print settings
* @param HeatingDots Amount of dots, every increment is 8 dots (32 = 256 dots)
* @param FeedTime How long it spends before it feeds after printing 
* @param HeatTime How long it spends heating up beforehand (nanoseconds)
*/
void RawPrintSettings(byte HeatingDots = 32, byte FeedTime = 255, byte HeatTime = 255);

/*!
* @brief Adafruit Library was not working for the specific printer i have, im initialising it using the way Adafruit does but withhout the extra jazz
*/
void RawInitPrinter();

/*!
* @brief Switch statement basically that calls sub functions using the input code, this handles the formatting into function params
*/
void RecieveInput();

/*!
* @brief Initialises pins for use 
*/
void InitPins();

/*!
* @brief Writes bytes to the 4 digit 7 segment display using the byte table
*/
void DigitalTube_MSBFIRST(int position, byte value);

/*!
* @brief Translates 4 digit numbers into the byte values and displays them in their correct places
*/
void ShowCount(int value);

/*!
* @brief Beeps the buzzer and flashes a light, has a bool if the game is wanting to be played silently
*/
void BeepBuzzer(bool isLoud);

#endif  // BEYONDBUTTONS_H