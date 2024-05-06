const int soundPin = 13;
void setup()
{
  pinMode(soundPin, OUTPUT);
}

void loop()
{
  tone(soundPin, 150);
  delay(500);
  noTone(soundPin);
  delay(500);
}	