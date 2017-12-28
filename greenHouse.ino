#include <SPI_VFD.h>


 //Digital pin (goes to mosfet gate (G))
 #define PUMP1_PIN 6
 
void setup(){
  Serial.begin(9600);
  setup_temp_and_humid();
  setup_water_pump(PUMP1_PIN);
  setup_lcd();
}

void loop(){
  //get_temperature();
  //delay(1000);
  //get_humidity();
  //get_moisture();
  turn_on_pump(60,PUMP1_PIN);

  displayMessage();
  delay(10000);
}
