[README (1) (1).md](https://github.com/user-attachments/files/32223171/README.1.1.md)
# Activity 4 — Ultrasonic Distance Sensor

## Overview
This activity uses an HC-SR04 ultrasonic distance sensor with an Arduino UNO to measure distance to an object and print the reading to the Serial Monitor.

## Components Used
- Arduino UNO
- HC-SR04 Ultrasonic Distance Sensor
- Jumper wires
- Tinkercad Circuits (simulation)

## Circuit Connections
| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC         | 5V          |
| GND         | GND         |
| Trig        | Pin 10      |
| Echo        | Pin 11      |

See `circuit.png` for the circuit diagram.

## Working Principle
1. The `trigPin` sends a short 10 microsecond HIGH pulse to trigger the ultrasonic burst.
2. The sensor emits an ultrasonic pulse and the `echoPin` goes HIGH for the duration the pulse takes to return.
3. `pulseIn()` measures this duration.
4. Distance is calculated using the speed of sound:
   ```
   distance = duration * 0.0343 / 2
   ```
   (divided by 2 because the pulse travels to the object and back)
5. The result is printed to the Serial Monitor every 500 ms.

## Files
- `circuit.png` — Circuit diagram (Tinkercad)
- `ultrasonic_distance_sensor.ino` — Arduino source code
- `README.md` — This file

## Output
Serial Monitor prints:
```
Distance: <value> cm
```

## Author
Logith — Mechatron Motors
