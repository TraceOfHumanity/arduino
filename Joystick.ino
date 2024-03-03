// mega 2056
#include <Servo.h>
const int xPin = A0; // Pin connected to the X output
const int yPin = A1; // Pin connected to the Y output

const int servo1 = 3; // Pin connected to the servo

const int greenLed = 13; // Pin connected to the green LED
const int redLed = 12;   // Pin connected to the red LED

Servo myservo; // Create servo object to control a servo

void setup()
{
  Serial.begin(9600);

  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);

  myservo.attach(servo1); // attaches the servo on pin 9 to the servo object
}

void loop()
{
  int XValue = analogRead(xPin);
  int YValue = analogRead(yPin);

  Serial.print("X: ");
  Serial.print(XValue);
  Serial.print(" | Y: ");
  Serial.print(YValue);
  int servo1Value = map(XValue, 0, 1023, 0, 180); // Map the X value to a range of 0-180

  myservo.write(servo1Value); // Set the servo position

  if (XValue < 100)
  {
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
  }
  else if (XValue > 900)
  {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
  }
  else
  {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, LOW);
  }

  Serial.println();
}