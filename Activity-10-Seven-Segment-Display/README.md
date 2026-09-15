[README (10).md](https://github.com/user-attachments/files/32223465/README.10.md)
[Uploading README [Uploading README (15).md…]()
# Activity 10 – Seven Segment Display (Arduino UNO)

## Overview
This activity demonstrates driving a common-cathode/common-anode 7-segment
display directly from an Arduino UNO's digital pins to display the letter
**"A"**.

## Components Used
- Arduino UNO
- 7-Segment Display
- Jumper wires

## Circuit
See `circuit.png` for the wiring diagram (built and simulated in Tinkercad).

| Segment | Arduino Pin |
|---------|-------------|
| a       | 2           |
| b       | 3           |
| c       | 4           |
| d       | 5           |
| e       | 6           |
| f       | 7           |
| g       | 8           |

## Working
- Each segment (a–g) of the display is connected to a digital pin (2–8) on
  the Arduino, configured as `OUTPUT`.
- The `loop()` function sets a specific combination of `HIGH`/`LOW` values
  on the segment pins to light up only the segments needed to form the
  letter **"A"**.
- Since the pattern doesn't change, the display continuously shows "A".

## Code
See `code.ino` for the full Arduino sketch.

## How to Run
1. Open the sketch in the Arduino IDE (or Tinkercad Circuits).
2. Wire the 7-segment display to pins 2–8 as per the table above.
3. Upload the code to the Arduino UNO.
4. The display will show the letter "A".
(16).md…]()
