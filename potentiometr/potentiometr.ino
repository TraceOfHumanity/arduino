// mega 2560
#define POTENTIOMETER_PIN A2
#define LED_PIN 13

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  int pointerValue = analogRead(POTENTIOMETER_PIN);
  // int brightness = map(pointerValue, 0, 1023, 0, 255);
  int brightness = pointerValue / 4;
  analogWrite(LED_PIN, brightness);
}