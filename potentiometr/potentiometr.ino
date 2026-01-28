#define POTENTIOMETER_PIN A2
#define LED_PIN 11

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  int pointerValue = analogRead(POTENTIOMETER_PIN);
  int brightness = pointerValue / 4;
  analogWrite(LED_PIN, brightness);
}