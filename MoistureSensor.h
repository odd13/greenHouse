/*
  MoustureSensor.h - Library for creating a sensor for soil moisture.
  Created by Odd13, 2018-01-06.
*/
#ifndef MoistureSensor_h
#define MoistureSensor_h

#include "Arduino.h"

class MoistureSensor
{
  public:
    MoistureSensor(int pin);
    int current_moisture();
  private:
    int _pin;
};

#endif
