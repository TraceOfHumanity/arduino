// mega 2560
// servo
#include <Servo.h>

Servo myservo; // create servo object to control a servo
               // a maximum of eight servo objects can be created
void setup()
{
  myservo.attach(3); // attaches the servo on pin 3 to the servo object
}

void loop()
{
  myservo.write(90);  // sets the servo position according to the scaled value
  delay(1000);        // waits for the servo to get there
  myservo.write(180); // sets the servo position according to the scaled value
  delay(1000);        // waits for the servo to get there
  myservo.write(0);   // sets the servo position according to the scaled value
  delay(1000);        // waits for the servo to get there
}
