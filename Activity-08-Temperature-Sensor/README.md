[README (8).md](https://github.com/user-attachments/files/32223409/README.8.md)
[Uploading README (6).md…]()
# Activity 8 – Temperature Sensor (TMP36)

## Overview
This activity reads temperature using a TMP36 analog temperature sensor connected to an Arduino UNO. The onboard LED (pin 13) turns ON when the temperature reaches or exceeds 30°C, and turns OFF otherwise. Live readings are printed to the Serial Monitor.

## Components Used
- Arduino UNO
- TMP36 Temperature Sensor
- LED (pin 13, built-in)
- Jumper wires

## Circuit Connections
- TMP36 signal pin → Arduino A0
- TMP36 VCC → 5V
- TMP36 GND → GND
- LED → Pin 13 (onboard LED)

See `circuit.png` for the full circuit diagram (simulated in Tinkercad).

## Code
See `code.ino` for the complete Arduino sketch.

### How it works
1. Reads the analog voltage from the TMP36 sensor on pin A0.
2. Converts the analog value to voltage: `voltage = value * (5.0 / 1023.0)`
3. Converts voltage to temperature in °C: `temperature = (voltage - 0.5) * 100`
4. Prints the temperature to the Serial Monitor (9600 baud).
5. Turns the LED ON if temperature ≥ 30°C, else OFF.
6. Repeats every 1 second.

## Files in this Repository
- `code.ino` – Arduino sketch
- `circuit.png` – Circuit diagram screenshot
- `README.md` – This file
