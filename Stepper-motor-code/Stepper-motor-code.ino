#include <Stepper.h>

const int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() 
{
  myStepper.setSpeed(10); // RPM
}

void loop() 
{
  myStepper.step(1);  // step continuously forward
}
