#include <Stepper.h>

const int STEPS_PER_REVOLUTION = 2048;
const int MOTOR_RPM = 10;

// Stepper motors rely on pins 8, 9, 10, and 11
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
void setup() 
{
  myStepper.setSpeed(MOTOR_RPM); // RPM
}

void loop() 
{
  myStepper.step(1);  // step continuously forward
}
