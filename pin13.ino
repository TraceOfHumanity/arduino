void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{

  // for (int i = 0; i < 255; i)
  // {
  //   analogWrite(13, i);
  //   delay(10);
  // }
  // for (int i = 255; i > 0; i--)
  // {
  //   analogWrite(13, i);
  //   delay(10);
  // }

  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}