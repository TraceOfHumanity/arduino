#define ECHO_PIN 3
#define TRIGGER_PIN 4

unsigned long lastTimeUltrasonicTrigger = millis();
unsigned long ultrasonicTriggerInterval = 500;

void triggerUltrasonic() {
    digitalWrite(TRIGGER_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIGGER_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGGER_PIN, LOW);
}

double getUltrasonicDistance() {
    double distanceMicroseconds = pulseIn(ECHO_PIN, HIGH);
    double distanceCentimeters = distanceMicroseconds / 58.0;
    return distanceCentimeters;
}

void setup() {
  Serial.begin(9600);
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIGGER_PIN, OUTPUT);
}
  
void loop() {
    unsigned long timeNow = millis();
    if (timeNow - lastTimeUltrasonicTrigger > ultrasonicTriggerInterval) {
        lastTimeUltrasonicTrigger += ultrasonicTriggerInterval;
        triggerUltrasonic();
        Serial.println(getUltrasonicDistance());
    }
  
}
  