/**
* iMEC_ThePriceisDice - Simple program to control a rotary dice. 
* @Authors - Josiah Bailey & Gabe O'Brien
* @Version 0.0
*/  

#include <Servo.h>

//
//Defines
//

//
//Objects
//

//
//global(s)
//
unsigned int button_status = 0;

Servo wheel_servo;

void setup() {
  // put your setup code here, to run once:

  //Setup Servo ---------------------------------------------------------------
  wheel_servo.attach(9);       //attaches the servo on pin 9 to the servo object

}

void loop() {
  // put your main code here, to run repeatedly:

  //Read the status of the spin configuration switches. 

  //Read the status of the button. 

  //Only start a spin if the button has been pressed. 
  if (button_status == 1)
  {

  }

}
