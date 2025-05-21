// mega 2560
#define BUTTON_PIN 2

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
}

void loop()
{
  // Serial.println(diitalRead(BUTTON_PIN));
  if (digitalRead(BUTTON_PIN) == HIGH)
  {
    Serial.println("Button pressed");
  }
  else
  {
    Serial.println("Button not pressed");
  }
  delay(100);
}