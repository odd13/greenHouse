/*
 * HumidTempSensor.h class to create humidity and temp DH11 sensors.
 * Created by Odd13 2018-01-15
 */

#ifndef HumidTempSensor_h
#define HumidTempSensor_h

#include "Arduino.h"
#include "dht11.h"

class HumidTempSensor : public dht11
{
  public:
    HumidTempSensor(int pin);
    int current_temp();
    int current_humidity();
    String current_humid_and_temp_as_string();
  private:
    void check_status();
    int _pin;
};

#endif
