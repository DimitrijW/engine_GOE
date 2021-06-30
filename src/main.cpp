/*      Projekt ->  GOE 
        Datum   ->  26.06.2021
*/

#include <Arduino_LSM9DS1.h>
// #include <Stepper.h>

// const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// // for your motor

// // initialize the stepper library on pins 8 through 11:
// Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

// void setup() 
// {
//   // set the speed at 60 rpm:
//   myStepper.setSpeed(60);
//   // initialize the serial port:
//   Serial.begin(9600);
// }

// void loop() 
// {
//   // step one revolution  in one direction:
//   Serial.println("clockwise");
//   myStepper.step(stepsPerRevolution);
//   delay(500);

//   // step one revolution in the other direction:
//   Serial.println("counterclockwise");
//   myStepper.step(-stepsPerRevolution);
//   delay(500);
// }

// defines pins numbers
const int stepPin = 2; 
const int dirPin = 3; 
 
void setup() 
{
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() 
{
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200; x++)
  {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay
  
  digitalWrite(dirPin,LOW); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 400; x++)
  {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }
  delay(1000);
}