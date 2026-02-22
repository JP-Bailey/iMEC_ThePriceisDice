/**
* iMEC_ThePriceisDice - Simple program to control a rotary dice. 
* @Authors - Josiah Bailey & Gabe O'Brien
* @Version 0.0
*/  


//Includes 
#include <Servo.h>

#define BUTTON 13 

//
//global(s)
//

//Var to store the value of the button

int button_value = 0 ;

int mode = 0;

Servo wheel_servo;

void setup() {
  // put your setup code here, to run once:

  //Configuring the button 
  pinMode(BUTTON, INPUT);

  //Read the intial condition of the button 

  button_value = digitalRead(BUTTON);

  //check the buttons value if it is a 1 set system to auto run if 0 set to manual

  if (button_value == 1){
    mode = 1;
  }
  else{
    mode = 0;
  }

  //Setup Servo ---------------------------------------------------------------
  wheel_servo.attach(9); //attaches the servo to the servo object

}

void loop() {
  // put your main code here, to run repeatedly:
 
  //Read the status of the button.
  button_value = digitalRead(BUTTON);

  //Check the mode 
  if (mode == 1){
  //Auto Mode
  if (button_value == 1){
    wheel_servo.write(80);
    delay(6000);
    wheel_servo.write(0);
  }
  }
  else if (mode == 0){
    //Manual 
        if (button_value == 1){
          wheel_servo.write(80);
        }
        else{
          wheel_servo.write(0);
        }
      delay(100);
  }



  
  //Only start a spin if the button has been pressed. 

}
