/*
 Arduino controlling DC motor by a relay 

 This program's goal is to turn on for 5 seconds a relay so its NO contact can close an let the current go to a DC Motor.

 The main theme is the use of the delay to turn on an off the relay

*/  
int DC_Motor=2 // This creates a variable called DC_Motor and gives it a value of 2
void setup() { // void setup is the section of the program that runs just once.

pinMode(DC_Motor, OUTPUT); // we set the pin 2 as an output.

}

void loop() { // Void loop is the section of the program that runs forever.

digitalWrite(DC_Motor, HIGH); // this send 5v to the relay, it will close the NO contact where the DC Motor is so it'll turn it on.
delay(5000); // the action will last 5 seconds.
digitalWrite(DC_Motor, LOW); // this cuts the 5v to the relay, it will open the NO contact where the DC Motor is so it'll turn it off.
delay(5000); // the action will last 5 seconds.
}
