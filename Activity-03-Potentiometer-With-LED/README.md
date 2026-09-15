[README (3).md](https://github.com/user-attachments/files/32223138/README.3.md)
[README (3).md](https://github.com/user-attachments/files/32069822/README.3.md)
# Activity 3 – Potentiometer with LED

## Overview
This activity demonstrates analog input reading and PWM output control on an Arduino UNO. A potentiometer is used to vary the brightness of an LED in real time.

## Components Used
- Arduino UNO
- Potentiometer
- LED
- Resistor
- Jumper wires
- Simulated in Tinkercad

## Circuit Connections
- Potentiometer wiper → Arduino A0
- Potentiometer outer pins → 5V and GND
- LED anode (through resistor) → Arduino pin 9 (PWM)
- LED cathode → GND

See `circuit.png` for the full circuit diagram.

## How It Works
1. The potentiometer's wiper voltage is read on analog pin `A0` using `analogRead()`, giving a value between 0 and 1023.
2. This value is mapped to a PWM range of 0–255 using the `map()` function.
3. The mapped value is written to the LED pin (pin 9) using `analogWrite()`, controlling its brightness proportionally to the potentiometer's position.

## Code
See `code.ino` for the full Arduino sketch.

## Files in this Repository
- `README.md` – Project description and documentation
- `circuit.png` – Circuit diagram screenshot
- `code.ino` – Arduino source code
