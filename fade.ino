
int brightness = 0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for (brightness = 0; brightness <= 255; brightness += 2) {
    analogWrite(9, brightness);
    delay(10); 
  }
  for (brightness = 255; brightness >= 0; brightness -= 2) {
    analogWrite(9, brightness);
    delay(10);
  }
}