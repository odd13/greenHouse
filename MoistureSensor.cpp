/*
  MoustureSensor.cpp - Library for creating a sensor for soil moisture.
  Created by Odd13, 2018-01-06.
*/
#include "Arduino.h"
#include "MoistureSensor.h"

MoistureSensor::MoistureSensor(int pin)
{
  _pin = pin;
}

int MoistureSensor::current_moisture(){
  return analogRead(_pin);
}

