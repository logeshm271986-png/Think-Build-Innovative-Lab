/*
  Activity 01 - LED Blink
  Description: Blinks an LED connected to pin 8 with a 1 second ON/OFF interval.
  Board: Arduino UNO
*/

const int ledPin = 8;   // Pin connected to the LED

void setup() {
  pinMode(ledPin, OUTPUT);   // Set the LED pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(1000);                 // Wait for 1 second
  digitalWrite(ledPin, LOW);  // Turn the LED off
  delay(1000);                 // Wait for 1 second
}
