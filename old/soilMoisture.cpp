#include <SoftwareSerial.h>
/*
  # Example code for the moisture sensor
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  
  # the sensor value description
  # 0  ~300     dry soil
  #      humid soil
  # ~480     in water

  
*/

void get_moisture(int sensor){
  Serial.print("Moisture Sensor Value:");
  Serial.println(analogRead(sensor));
  delay(100);
}
