void setup()
{
  pinMode(2, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int water = analogRead(A0);
  Serial.println(water);
  if (water > 500)
  {
    tone(2, 100);
    delay(150);
    noTone(2);
    delay(30);
  }
  else
  {
    noTone(2);
    // digitalWrite(2, LOW);
  }
}