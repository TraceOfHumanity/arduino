
// mega 2560
//photoResistor

const int ledPin = 13;
const int photoreceptorPin = A0;
const int soundPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(photoreceptorPin, INPUT);
  pinMode(soundPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(photoreceptorPin);
  Serial.println(lightLevel);
  if (lightLevel > 500) {
    tone(soundPin, 100);
    delay(150);
    noTone(soundPin);
    delay(30);
  } else {
    noTone(soundPin);
  }
}
