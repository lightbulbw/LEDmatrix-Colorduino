#include "RGBMatrix.h"
 
void setup() {
  RGBMatrixInit();
  Serial.begin(9600); // initialize the serial monitor

  //DispShowManyChar('!',0,100,255,0);
  //DispShowManyChar('"',0,0,255,0);
  //DispShowManyChar('#',0,255,0,0);
  DispShowManyChar('$',255,0,0,0);
}


void loop() {
   
}
