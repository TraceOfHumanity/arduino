//mega 2560
//sound sensor
//joystick 


int lampPin = 4; // Pin connected to the lamp
int soundSensorPin = A1; // Pin connected to the sound sensor

void setup()
{
  pinMode(soundSensorPin, INPUT);
  pinMode(lampPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sound = analogRead(soundSensorPin);
  int brightness = map(sound, 0, 1023, 0, 255); // Map the sound value to a brightness value between 0 and 255
  analogWrite(lampPin, brightness); // Set the brightness of the lamp

  Serial.println(sound);
  delay(100); // Delay for stability
}
