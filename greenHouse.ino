
 //Digital pin (goes to mosfet gate (G))
 #define PUMP1_PIN 6
 
void setup(){
  Serial.begin(9600);
  setupTempHumid();
  
}

void loop(){
  //getTemperature();
  //delay(1000);
  //getHumidity();
  //getMoisture();
  turnOnPump(60,PUMP1_PIN);
  
  delay(10000);
}
