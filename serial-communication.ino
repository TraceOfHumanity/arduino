void setup() {
  Serial.begin(9600);
  Serial.setTimeout(100);
}

void loop() {
    if (Serial.available() > 0) {
        String data = Serial.readStringUntil('\n');
        Serial.println(data);
    }
}