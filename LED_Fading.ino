//mega 2560
/* The following code in C++ for the Arduino Mega 2560 platform sets pin 2 as an output and executes an infinite loop. In the loop, the brightness of the light on pin 2 is first increased from 0 to 255, then decreased from 255 to 0. Each increase or decrease in brightness takes 10 milliseconds.*/
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(2, brightness);
    delay(10);
  }
  
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(2, brightness);
    delay(10);
  }
}
