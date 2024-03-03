// mega 2560
#include <Stepper.h>
#define STEPS 2038
Stepper stepper(STEPS, 2, 4, 3, 5);
void setup()

{
}

void loop()
{
  stepper.setSpeed(8);
  stepper.step(1000);
  // delay(1000);
  stepper.setSpeed(8);
  stepper.step(100);
  // delay(1000);
  stepper.setSpeed(8);
  stepper.step(-300);
  // delay(1000);
}