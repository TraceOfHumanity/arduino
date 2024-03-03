// mega 2560

void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  tone(3, 100);
  delay(150);
  noTone(3);
  delay(30);
}