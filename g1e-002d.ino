#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544(2, 3, 4, 5, 6);


void setup()   {

  display.begin();
  display.setContrast(50);
  display.clearDisplay();
}

byte LCD_Key () {
  int lcd_key_pr = analogRead(A0); 
   
   if (lcd_key_pr > 884)  return 0;  //Button none    1023
   if (lcd_key_pr < 71)   return 1;  //Button Left    0
   if (lcd_key_pr < 236)  return 2;  //Button Press   143
   if (lcd_key_pr < 419)  return 3;  //Button Down    330
   if (lcd_key_pr < 626)  return 4;  //Button Right   508
   if (lcd_key_pr < 884)  return 5;  //Button Up      745
}

void loop() {

  display.clearDisplay();
    
  display.setTextSize(2);
  display.setTextColor(BLACK);
  display.setCursor(20,10);

switch (LCD_Key())
 {
   case 0:
     display.println("none");
     break;
   case 1:
     display.println("Left");
     break;
   case 2:
     display.println("Press");
     break;
   case 3:
     display.println("Down");
     break;
   case 4:
     display.println("Right");
     break;
   case 5:
     display.println("Up");
     break;
 }
  
  display.display();
  delay(500);
}


