/*
  Created by: Mr. Coxall
  Created on: Sept 2020

  Turns an LED on for one second, then off for one second, repeatedly.
*/

const int PIN_5 = 5;
int blinkTime = 1000;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_5, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  digitalWrite(PIN_5, LOW);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  
  blinkTime = blinkTime + 1000;
}