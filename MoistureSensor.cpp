/*
  MoustureSensor.cpp - Library for creating a sensor for soil moisture.
  Created by Odd13, 2018-01-06.
  Analog pin
*/
#include "Arduino.h"
#include "MoistureSensor.h"

MoistureSensor::MoistureSensor(int pin)
{
  _pin = pin;
}

String MoistureSensor::current_moisture_as_string(){
  return "Moist: " + String(current_moisture());
}

int MoistureSensor::current_moisture(){
  return analogRead(_pin);
}

