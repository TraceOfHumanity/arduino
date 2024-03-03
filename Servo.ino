// mega 2560
// servo
#include <Servo.h>
int joyX = 0;
int angle = 0;
Servo myservo; // create servo object to control a servo
               // a maximum of eight servo objects can be created
void setup()
{
  myservo.attach(10); // attaches the servo on pin 3 to the servo object
  pinMode(joyX, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  int val = (analogRead(joyX) / 64) - 8;
  if (val > 0)
  {
    angle = angle + abs(val);
  }
  else
  {
    if (val < 0)
    {
      angle = angle - abs(val);
    }
    if (angle < 0)
      angle = 0;
    if (angle > 180)
      angle = 180;
  }
}
