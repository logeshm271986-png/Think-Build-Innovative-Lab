[README (7).md](https://github.com/user-attachments/files/32223383/README.7.md)
# Activity 7 — Soil Moisture Sensor

## Overview
This activity uses a Soil Moisture Sensor with an Arduino UNO to detect
dry vs. wet soil conditions and indicate the state using an onboard LED.
Sensor readings are also printed to the Serial Monitor.

## Components Used
- Arduino UNO
- Soil Moisture Sensor
- LED (connected to pin 13)
- Jumper wires

## Circuit Connections
| Soil Moisture Sensor Pin | Arduino Pin |
|---------------------------|-------------|
| VCC                        | 5V          |
| GND                         | GND         |
| A0 (Analog Out)            | A0          |

The LED is connected to digital pin 13 (built-in LED pin), which turns
ON when the soil is dry and OFF when the soil is wet.

See `circuit.png` for the Tinkercad circuit diagram.

## How It Works
1. The analog value from the soil moisture sensor is read on pin `A0`.
2. The value is printed to the Serial Monitor at 9600 baud.
3. If the reading is below `500`, the soil is considered **dry** and the
   LED turns **ON**.
4. If the reading is `500` or above, the soil is considered **wet** and
   the LED turns **OFF**.
5. The loop repeats every 500 ms.

## Files in this Repository
- `circuit.png` — Circuit diagram (Tinkercad simulation screenshot)
- `code.ino` — Arduino source code for the soil moisture activity
- `README.md` — This file

## Author
Logith 
