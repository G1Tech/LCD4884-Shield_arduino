#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544(2, 3, 4, 5, 6);


void setup()   {
  
  display.begin();
  display.setContrast(50);
  display.clearDisplay();
  
  display.setTextSize(2);
  display.setTextColor(BLACK);
  display.setCursor(35,10);
  display.println("G1");
  
  display.setTextSize(1);
  display.setTextColor(BLACK);
  display.println(" Electronics");
  
  display.display();
}

void loop() {
  
}


