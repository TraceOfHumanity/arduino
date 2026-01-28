// void setup() {
//     Serial.begin(9600);
//     delay(1000);
//     unsigned long timeNow = millis();
//     Serial.println(timeNow);
// }

// void loop() {
//     Serial.println(millis());
//     delay(1000);
// }

// ------------------------------------------------------------

// unsigned long startTime;

// void setup() {
//     Serial.begin(9600);
//     startTime = millis();
// }

// void loop() {
//     delay(1000);
//     unsigned long currentTime = millis();
//     unsigned long elapsedTime = currentTime - startTime;
//     Serial.println(elapsedTime);
// }

// ------------------------------------------------------------

unsigned long previousTime = millis();
unsigned long timeInterval = 500;

void setup() {
    Serial.begin(9600);
}

void loop() {
    unsigned long currentTime = millis();
    if (currentTime - previousTime > timeInterval) {
        Serial.println("Time interval has passed");
        Serial.println(millis());
        previousTime += timeInterval;
    }
}