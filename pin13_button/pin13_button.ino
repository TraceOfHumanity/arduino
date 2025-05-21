// mega 2560
#define BUTTON_PIN 2
#define LED_PIN 13

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // Serial.println(diitalRead(BUTTON_PIN));
  if (digitalRead(BUTTON_PIN) == HIGH)
  {
    Serial.println("Button pressed");
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    Serial.println("Button not pressed");
    digitalWrite(LED_PIN, LOW);
  }
}