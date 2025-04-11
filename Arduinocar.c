
#include <AFMotor.h>

AF_DCMotor MotorFR(1);  
AF_DCMotor MotorFL(2);  
AF_DCMotor MotorBL(3);  
AF_DCMotor MotorBR(4); 

const int buzPin = 2;  
const int ledPin = A5; 
const int valSpeed = 500; 

void setup() {
  Serial.begin(9600);
  pinMode(buzPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  

  MotorFL.setSpeed(valSpeed);
  MotorFR.setSpeed(valSpeed);
  MotorBL.setSpeed(valSpeed);
  MotorBR.setSpeed(valSpeed);

  MotorFL.run(RELEASE);
  MotorFR.run(RELEASE);
  MotorBL.run(RELEASE);
  MotorBR.run(RELEASE);
}

void loop() {
  while (Serial.available() > 0) {
    char command = Serial.read(); 
    Serial.println(command);

    switch (command) {
      case 'F': 
        MotorFL.run(FORWARD);
        MotorFR.run(FORWARD);
        MotorBL.run(FORWARD);
        MotorBR.run(FORWARD);
        break;

      case 'B': 
        MotorFL.run(BACKWARD);
        MotorFR.run(BACKWARD);
        MotorBL.run(BACKWARD);
        MotorBR.run(BACKWARD);
        break;

      case 'R':
        MotorFL.run(FORWARD);
        MotorFR.run(FORWARD);
        MotorBL.run(BACKWARD);
        MotorBR.run(BACKWARD);
        break;

      case 'L':  
        MotorFL.run(BACKWARD);
        MotorFR.run(BACKWARD);
        MotorBL.run(FORWARD);
        MotorBR.run(FORWARD);
        break;

      case 'S': 
        MotorFL.run(RELEASE);
        MotorFR.run(RELEASE);
        MotorBL.run(RELEASE);
        MotorBR.run(RELEASE);
        break;
    }
  }
}


