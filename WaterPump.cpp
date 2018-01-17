/*
  WaterPump.cpp - Library for creating a sensor for soil moisture.
  Created by Odd13, 2018-01-06.
  Digital pin
*/
#include "Arduino.h"
#include "WaterPump.h"

WaterPump::WaterPump(int pin)
{
  _pin = pin;
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
}

void WaterPump::turn_off(){
  digitalWrite(_pin, LOW);
}

void WaterPump::turn_on(int seconds){
  digitalWrite(_pin, HIGH);
  delay(seconds * 1000);
  digitalWrite(_pin, LOW);
}

