/*
 RGB light chaser 

 This program's goal is to turn on and off the RGB with the colors red, green, blue and white to give the impression it is a light chaser

 The main theme is the use of int to create the variables RED_Pin, BLUE_Pin and GREEN_Pin for the RGB

*/  
int RED_Pin=10; // int creates a variable called RED_Pin and gives it a value of 10.
int BLUE_Pin=11; // int creates a variable called BLUE_Pin and gives it a value of 11.
int GREEN_Pin=12; // int creates a variable called GREEN_Pin and gives it value of 12.
void setup() { // void setup is the section of the program that runs just once.
  
  pinMode(RED_Pin, OUTPUT);  // we set the pin 10 as an output.
  pinMode(BLUE_Pin, OUTPUT);  // we set the pin 11 as an output.
  pinMode(GREEN_Pin, OUTPUT);  // we set the pin 12 as an output.
}
void loop() {// Void loop is the section of the program that runs forever.
  digitalWrite(RED_Pin, HIGH);     // send high voltage (5v) to the pin 10 to turn on the RGB Red
  delay(250);               // Wait for 1/4 of a second.       
  digitalWrite(RED_Pin, LOW);      // send low voltage (0v) to the pin 10 to turn on the RGB Red
  delay(125);               // Wait for 1/8 of a second.
  digitalWrite(BLUE_Pin, HIGH);    // send high voltage (5v) to the pin 11 to turn on the RGB Blue
  delay(250);               // Wait for 1/4 of a second.       
  digitalWrite(BLUE_Pin, LOW);     // send low voltage (0v) to the pin 11 to turn on the RGB Blue
  delay(125);               // Wait for 1/8 of a second.
  digitalWrite(GREEN_Pin, HIGH);   // send high voltage (5v) to the pin 12 to turn on the RGB Green
  delay(250);               // Wait for 1/4 of a second.       
  digitalWrite(GREEN_Pin, LOW);    // send low voltage (0v) to the pin 12 to turn on the RGB Green
  delay(125);              // Wait for 1/8 of a second.
  digitalWrite(GREEN_Pin, HIGH);   // send high voltage (5v) to the pin 12 to turn on the RGB Green
  digitalWrite(RED_Pin, HIGH);     // send high voltage (5v) to the pin 10 to turn on the RGB Green
  digitalWrite(BLUE_Pin, HIGH);    // send high voltage (5v) to the pin 11 to turn on the RGB Green
  delay(250);              // Wait for 1/4 of a second.
  digitalWrite(GREEN_Pin, LOW);   // send low voltage (0v) to the pin 12 to turn on the RGB Green
  digitalWrite(RED_Pin, LOW);     // send low voltage (0v) to the pin 10 to turn on the RGB Red
  digitalWrite(BLUE_Pin, LOW);    // send low voltage (0v) to the pin 11 to turn on the RGB Blue
  delay(125);               // Wait for 1/8 of a second.
}
