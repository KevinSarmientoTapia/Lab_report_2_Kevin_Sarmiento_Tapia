/*

 PB not pressed RGB white PB pressed RGB off

 The program's goal is when the pin 9 read 1 (the push button is not pressed) the RGB will turn white and when it reads 0 (the push button iis pressed), the RGB becomes off.

 The theme is the use of digitalRead to read the value of the pin 9 and turn on or off the RGB.

 */
int RED_Pin=10; // int creates a variable called RED_Pin and gives it a value of 10.
int BLUE_Pin=11; // int creates a variable called BLUE_Pin and gives it a value of 11.
int GREEN_Pin=12; // int creates a variable called GREEN_Pin and gives it value of 12.
void setup() { // void setup is the section of the program that runs once.
  
  pinMode(9,INPUT_PULLUP); // we set the pin 12 as an input as we want to read its value.
  pinMode(RED_Pin, OUTPUT);  // we set the pin 10 as an output.
  pinMode(BLUE_Pin, OUTPUT);  // we set the pin 11 as an output.
  pinMode(GREEN_Pin, OUTPUT);  // we set the pin 12 as an output.

}

void loop() { // Void loop is the section of the program that runs forever.
  int button = digitalRead(9); // we set the variable button as the reading of the pin 9.
  if (button == 1) {
    digitalWrite(RED_Pin, HIGH);     // send high voltage (5v) to the pin 10 to turn on the RGB Red
    digitalWrite(BLUE_Pin, HIGH);    // send high voltage (5v) to the pin 11 to turn on the RGB Blue
    digitalWrite(GREEN_Pin, HIGH);   // send high voltage (5v) to the pin 12 to turn on the RGB Green
    // the combination of the colors red, blue and green creates white.
  } else {
    digitalWrite(RED_Pin, LOW);     // send low voltage (0v) to the pin 10 to turn off the RGB Red
    digitalWrite(BLUE_Pin, LOW);    // send low voltage (0v) to the pin 11 to turn off the RGB Blue
    digitalWrite(GREEN_Pin, LOW);   // send low voltage (0v) to the pin 12 to turn off the RGB Green
  }
}