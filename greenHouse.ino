 //#include <SPI_VFD.h>

#include "MoistureSensor.h"
#include "WaterPump.h"
// LCD Library
#include <Wire.h>
#include <LiquidCrystal.h>

MoistureSensor moist_sensor1(4);
WaterPump water_pump1(5);
LiquidCrystal lcd1( 8, 9, 4, 5, 6, 7 );

int dry_soil = 690;


void setup(){
  Serial.begin(9600);

  // set up the display's number of columns and rows: 
  lcd1.begin(16, 2);
  // Print a message to the display.
  lcd1.print("hello, world!");
}

void loop(){
  int moisture_reading = moist_sensor1.current_moisture();
  display_message_on_lcd(String(moisture_reading));
  
  if (moisture_reading <= dry_soil){
    water_pump1.turn_on(10);
  }

  Serial.println(moist_sensor1.current_moisture());
  delay(5000);
}

void display_message_on_lcd(String message) {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd1.setCursor(0, 0);
  lcd1.clear();
  // print the number of seconds since reset:
  lcd1.print("Moist: " + message + ":" + dry_soil);
}
