const int soundPin = 13;
void setup()
{
  pinMode(soundPin, OUTPUT);
}

void loop()
{
  tone(soundPin, 100);
  delay(150);
  noTone(soundPin);
  delay(30);
}	