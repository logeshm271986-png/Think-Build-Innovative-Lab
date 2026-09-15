# Activity 5 – PIR Motion Sensor with Arduino UNO

## Overview
This activity demonstrates interfacing a PIR (Passive Infrared) motion sensor with an Arduino UNO. When motion is detected, the onboard LED (pin 13) turns ON; when no motion is detected, it turns OFF.

## Components Used
- Arduino UNO
- PIR Motion Sensor
- Onboard LED (Pin 13)
- Jumper wires

## Circuit Connections
| PIR Sensor Pin | Arduino Pin |
|-----------------|-------------|
| VCC             | 5V          |
| GND             | GND         |
| OUT             | Digital Pin 2 |

See `circuit.png` for the simulated circuit diagram (built and tested on Tinkercad).

## Working
1. The PIR sensor continuously monitors the surrounding area for infrared changes caused by motion.
2. Its output pin (connected to Arduino Digital Pin 2) goes `HIGH` when motion is detected and `LOW` when idle.
3. The Arduino reads this signal using `digitalRead()`.
4. If motion is detected (`HIGH`), the LED on Pin 13 is switched ON.
5. If no motion is detected (`LOW`), the LED is switched OFF.

## Code
See `pir_sensor.ino` for the complete Arduino sketch.

## Files in this Repository
- `README.md` – Project documentation (this file)
- `circuit.png` – Circuit diagram screenshot from Tinkercad simulation
- `pir_sensor.ino` – Arduino source code
