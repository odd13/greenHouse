
void setup(){
  Serial.begin(9600);
  setupTempHumid();
}

void loop(){
  getTemperature();
  delay(1000);
  getHumidity();
  getMoisture();

  delay(1000);
}
