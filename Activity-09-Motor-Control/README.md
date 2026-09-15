[README (9).md](https://github.com/user-attachments/files/32223425/README.9.md)
[Uploading README (7).m# Activity 9 – DC Motor Control with Arduino

## Overview
This activity demonstrates basic ON/OFF control of a DC motor using an Arduino UNO and a motor driver module (L293D), simulated in Tinkercad.

## Components Used
- Arduino UNO
- DC Motor
- L293D Motor Driver
- Jumper wires

## Circuit
See `circuit.png` for the wiring diagram (Tinkercad simulation screenshot).

- Motor control signal connected to digital pin **9** on the Arduino
- Motor driven through the L293D motor driver module

## Code
See `activity_9.ino` for the complete Arduino sketch.

### Working
- Pin 9 is set as an OUTPUT pin.
- In the loop, the motor is turned **ON** (`HIGH`) for 3 seconds, then turned **OFF** (`LOW`) for 3 seconds, repeating continuously.

## How to Run
1. Open the `.ino` file in the Arduino IDE (or Tinkercad Circuits).
2. Connect the hardware as shown in `circuit.png`.
3. Upload the code to the Arduino UNO.
4. Observe the motor turning on and off every 3 seconds.
d…]()
