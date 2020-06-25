#include <Stepper.h>

const int stepsPerRevolution = 200;  //Choose number of Steps/Revolution

// initialize the stepper library on pins 8 to 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  myStepper.step(stepsPerRevolution);
  delay(1000);
}




