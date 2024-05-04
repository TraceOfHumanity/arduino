
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  int brightness = 0;
  int step = 5;
  int maxBrightness = 255;

  while (brightness < maxBrightness)
  {
    brightness += step;
    analogWrite(2, brightness);
    delay(30);
  }

  while (brightness > 0)
  {
    brightness -= step;
    analogWrite(2, brightness);
    delay(30);
  }
}
