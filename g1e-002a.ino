#include <LCD5110_Basic.h>

LCD5110 myGLCD(2,3,4,6,5); 


extern uint8_t SmallFont[];

void setup()
{
  myGLCD.InitLCD(60);
  myGLCD.clrScr();
  myGLCD.setFont(SmallFont);
  myGLCD.print("G1", CENTER, 15);
  myGLCD.print("Electronics", CENTER, 25);
}

void loop()
{
   
  
}  
