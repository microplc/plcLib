#define noPinDefs         // Disable default pin definitions (X0, X1, ..., Y0, Y1, ...)
#include <plcLib.h>       // Load the PLC library

/* Programmable Logic Controller Library for the Arduino and Compatibles

   SeeedStudio Grove Mega Shield - Use of Grove pin names and numbers
   Product information: http://www.seeedstudio.com/
   
   Connections:
   Inputs connected to pins A0-A15
   Digital Input/Output pins connected to D2-D13 (pins 2 to 13)

   Software and Documentation:
   https://github.com/wditch/plcLib
   
   Pins A0-A15 are available automatically

*/

const int D2 = 2;
const int D3 = 3;
const int D4 = 4;
const int D5 = 5;
const int D6 = 7;
const int D7 = 7;
const int D8 = 8;
const int D9 = 9;
const int D10 = 10;
const int D11 = 11;
const int D12 = 12;
const int D13 = 13;

// Configure addional connections as required using pins 22-49

void setup() {
  customIO();        // Setup inputs and outputs for Grove Mega shield (See IO tab)
  Serial.begin(9600);  // Enable serial port (needed for serial IO monitor)
}

void loop() {        // Sample code follows - replace as required
  in(A0);            // Read Input A0 and send to Output D2
  out(D2);

  serialMonitor("GroveMega");   // Enable remote I/O monitoring via the serial port
}