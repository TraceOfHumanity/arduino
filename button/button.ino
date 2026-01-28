#define BUTTON_PIN 2
#define LED_PIN 11

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    Serial.println("Button pressed");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("Button not pressed");
    digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}