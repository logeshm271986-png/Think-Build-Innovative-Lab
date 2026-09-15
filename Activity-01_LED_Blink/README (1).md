# Activity 01 – LED Blink

## Objective
To understand digital output programming using Arduino by blinking an LED.

## Components Used
- Arduino UNO
- LED
- 220 Ω Resistor
- Breadboard
- Jumper Wires

## Circuit Diagram
![Circuit Diagram](circuit.png)

*(Replace `circuit.png` with a screenshot of your Tinkercad circuit before uploading.)*

## Arduino Program
The full sketch is available in [`code.ino`](./code.ino).

```cpp
const int ledPin = 8;   

void setup() {
  pinMode(ledPin, OUTPUT);   
}

void loop() {
  digitalWrite(ledPin, HIGH); 
  delay(1000);                 
  digitalWrite(ledPin, LOW);  
  delay(1000);                 
}
```

## Output
*(Insert a screenshot of the simulation running successfully in Tinkercad here.)*

## Learning Outcome
- Understood digital output pins.
- Learned the use of `pinMode()`.
- Learned the use of `digitalWrite()`.
- Understood the role of `delay()`.
- Gained hands-on experience simulating circuits in Tinkercad.

## Challenges Faced
- Incorrect pin number initially assigned in code.
- Missing resistor caused incorrect current flow in simulation.
- Minor syntax error (missing semicolon) resolved after debugging.

## Real-World Applications
- Status indicators (e.g., power-on/error LEDs on devices).
- Warning systems (e.g., alert lights in industrial equipment).
- Traffic signal controllers.

## Connection to Your PoC
The LED blinking concept can be used as a status indicator in my Smart Irrigation System — for example, to signal when the water pump is active or when a sensor reading is out of range.
