/*
  WaterPump.h - Library for creating a waterpump.
  Created by Odd13, 2018-01-06.
*/
#ifndef WaterPump_h
#define WaterPump_h

#include "Arduino.h"

class WaterPump
{
  public:
    WaterPump(int pin);
    void turn_on(int seconds);
  private:
    int _pin;
};

#endif
