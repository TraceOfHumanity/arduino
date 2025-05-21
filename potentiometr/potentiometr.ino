// mega 2560
#define POTENTIOMETER_PIN A2

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(POTENTIOMETER_PIN));
  delay(100);
}