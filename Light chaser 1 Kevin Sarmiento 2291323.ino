/*
 Light chaser 1

 This program's goal is to turn on and off the red LED, then blue LED, then yellow LED and finally green LED consecutively to give the impression it is a light chaser.

 The main theme is the Digital output.

*/  
void setup() { // void setup is the section of the program that runs just once.
  
  pinMode(10, OUTPUT);  // we set the pin 10 as an output.
  pinMode(11, OUTPUT);  // we set the pin 11 as an output.
  pinMode(12, OUTPUT);  // we set the pin 12 as an output.
  pinMode(13, OUTPUT);  // we set the pin 13 as an output.
}
void loop() {// Void loop is the section of the program that runs forever.
  digitalWrite(10, HIGH);   // send high voltage (5v) to the pin 10 to turn on the LED Red
  delay(250);               // Wait for 1/4 of a second.       
  digitalWrite(10, LOW);    // send low voltage (0v) to the pin 10 to turn on the LED Red
  delay(250);               // Wait for 1/4 of a second.
  digitalWrite(11, HIGH);   // send high voltage (5v) to the pin 11 to turn on the LED Blue
  delay(250);               // Wait for 1/4 of a second.       
  digitalWrite(11, LOW);    // send low voltage (0v) to the pin 11 to turn on the LED Blue
  delay(250);               // Wait for 1/4 of a second.
  digitalWrite(12, HIGH);   // send high voltage (5v) to the pin 12 to turn on the LED yellow
  delay(250);               // Wait for 1/4 of a second.       
  digitalWrite(12, LOW);    // send low voltage (0v) to the pin 12 to turn on the LED Yellow
  delay(250);               // Wait for 1/4 of a second.
  digitalWrite(13, HIGH);   // send high voltage (5v) to the pin 13 to turn on the LED Green
  delay(250);               // Wait for 1/4 of a second.       
  digitalWrite(13, LOW);    // send low voltage (0v) to the pin 13 to turn on the LED Green
  delay(250);               // Wait for 1/4 of a second.
}
