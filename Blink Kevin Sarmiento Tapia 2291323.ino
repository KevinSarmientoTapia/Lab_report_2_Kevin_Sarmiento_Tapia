/*
 Bink

 This programs goal is to turn on for a second and then turn off for another second the LED to give the impression it is blinking.

 The main theme is Digital output.

*/
void setup() { // void setup is the section of the program that runs just once.
  pinMode(10, OUTPUT); // we set the pin 10 as an output.
}
void loop() { // Void loop is the section of the program that runs forever.
  digitalWrite(10, HIGH); // send high voltage (5v) to the pin 10 to turn on the LED
  delay(1000); // Wait for a second.                     
  digitalWrite(10, LOW); // send low voltage (0v) to the pin 10 to turn off the LED  
  delay(1000); // Wait for a second.  
}
