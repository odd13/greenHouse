/*
 * Pin D5 is the gate
 * 
 * MOSFET
 * Gate = G = signal from arduino
 * Source = S = Source drain (arduino ground)
 * Drain = D = Item drain (ground for object)
 * 
 * Ground from 12 volt source goes to ground on arduino
 * Positive from 12 volt source goes to positive side of item (pump +)
 *
 * 
 */

 void setup_water_pump(int PUMP_PIN1){
  pinMode(PUMP_PIN1, OUTPUT);
  digitalWrite(PUMP_PIN1, LOW);
 }

 void turn_on_pump(int seconds, int pump){
     digitalWrite(pump, HIGH);
     delay(seconds * 1000);
     digitalWrite(pump, LOW);
     delay(seconds * 1000);
 }

