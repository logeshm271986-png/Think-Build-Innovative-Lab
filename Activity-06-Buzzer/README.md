[README (6).md](https://github.com/user-attachments/files/32223357/README.6.md)
[Uploading README (4).md…]# Activity 6 – Buzzer

Simple Arduino Uno project that drives a piezo buzzer, turning it on and off in a repeating beep pattern.

## Components
- Arduino Uno
- Piezo Buzzer

## Circuit
- Buzzer positive lead → Arduino Digital Pin 8
- Buzzer negative lead → Arduino GND

See `circuit.png` for the wiring diagram (simulated in Tinkercad).

## Code
See `code.ino`.

```cpp
int buzzerPin = 8;

void setup()
{
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  tone(buzzerPin, 1000);
  delay(500);

  noTone(buzzerPin);
  delay(500);
}
```

## How It Works
1. `buzzerPin` (pin 8) is set as an `OUTPUT`.
2. In `loop()`, `tone(buzzerPin, 1000)` generates a 1000 Hz square wave on the pin, producing a beep.
3. The beep plays for 500 ms.
4. `noTone(buzzerPin)` stops the tone for 500 ms.
5. The cycle repeats indefinitely, giving a continuous on/off beeping sound.
()
