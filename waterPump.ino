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

 void setupWaterPump(){
  
 }

 void turnOnPump(int seconds, int pump){
   Serial.print("Pump pin number:");
   Serial.println(pump);
   Serial.print("Pump turning on for:");
   Serial.println(seconds);
 }

