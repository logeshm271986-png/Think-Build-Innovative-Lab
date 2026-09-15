int soilPin = A0;
int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int moisture = analogRead(soilPin);
  Serial.print("Soil Moisture: ");
  Serial.println(moisture);

  if (moisture < 500)
  {
    // Soil is dry
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    // Soil is wet
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
