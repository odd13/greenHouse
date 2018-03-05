/* GreenHouse:
 *  Created by Odd13
 */
#include "MoistureSensor.h"
#include "WaterPump.h"
#include "HumidTempSensor.h"

// LCD Library
#include <Wire.h>
#include <LiquidCrystal.h>

/* Configure Sensors
 * 
 */

MoistureSensor moist_sensor1(4);
WaterPump water_pump1(2);
HumidTempSensor humid_temp_sensor1(3);
LiquidCrystal lcd1( 8, 9, 4, 5, 6, 7 );


/* Setting
 *  
 */
int dry_soil = 550;
int pump_running_seconds = 30;
int lcd_line;
int sensor_check_delay_in_seconds = 5;
int moisture_reading_sensor1;

void setup(){
  Serial.begin(9600);

  // LCD Setup - set up the display's number of columns and rows: 
  lcd1.begin(16, 2);
}

void loop(){
  moisture_reading_sensor1 = moist_sensor1.current_moisture();

  lcd_line = 0;
  display_message_on_lcd(moist_sensor1.current_moisture_as_string(), lcd_line, true);

  lcd_line = 1;
  display_message_on_lcd(humid_temp_sensor1.current_humid_and_temp_as_string(), lcd_line, false);

  if (moisture_reading_sensor1 <= dry_soil){
    water_pump1.turn_on(pump_running_seconds);
  }

  delay(sensor_check_delay_in_seconds*1000);
}

void display_message_on_lcd(String message, int lcd_line, bool lcd_clear) {

  lcd1.setCursor(0, lcd_line);
  if (lcd_clear) lcd1.clear();
  //lcd1.clear();

  lcd1.print(message);
}
