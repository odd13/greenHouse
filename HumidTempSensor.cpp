/*
 * HumidTempSensor.cpp - Class to create Humidity and Temp sensors
 * based on the DH11 chip.
 * Created by Odd13 2018-01-11
 * Digital Pin
 */
#include "Arduino.h"
#include "HumidTempSensor.h"

HumidTempSensor::HumidTempSensor(int pin) : dht11()
{
  _pin = pin;
}

String HumidTempSensor::current_humid_and_temp_as_string(){
  return "Temp/Humid: " + String(current_temp()) + "/" + String(current_humidity());
}

int HumidTempSensor::current_temp(){
  this->read(_pin);
  return this->temperature;
}

int HumidTempSensor::current_humidity(){
  this->read(_pin);
  return this->humidity;
} 
