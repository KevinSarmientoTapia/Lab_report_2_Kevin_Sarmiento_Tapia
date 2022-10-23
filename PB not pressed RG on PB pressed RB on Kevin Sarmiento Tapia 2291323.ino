/*

 PB not pressed RG on PB pressed RB on

 The program's goal is when the pin 9 read 1 (the push button is not pressed) the RGB will turn green and and when it reads 0 (the push button is pressed), the RGB becomes blue.

 The theme is the use of digitalRead to read the value of the pin 9 and turn the RGB green or blue.

 */
int RED_Pin=10; // int creates a variable called RED_Pin and gives it a value of 10.
int BLUE_Pin=11; // int creates a variable called BLUE_Pin and gives it a value of 11.
int GREEN_Pin=12; // int creates a variable called GREEN_Pin and gives it value of 12.
void setup() { // void setup is the section of the program that runs once.
  
  pinMode(9,INPUT_PULLUP); // we set the pin 12 as an input as we want to read its value.
  pinMode(BLUE_Pin, OUTPUT);  // we set the pin 11 as an output.
  pinMode(GREEN_Pin, OUTPUT);  // we set the pin 12 as an output.

}

void loop() { // Void loop is the section of the program that runs forever.
  int button = digitalRead(9); // we set the variable button as the reading of the pin 9.
  if (button == 1) {
  
    digitalWrite(GREEN_Pin, HIGH);   // send high voltage (5v) to the pin 12 to turn on the RGB Green
    digitalWrite(BLUE_Pin, LOW);   // send low voltage (0v) to the pin 11 to turn on the RGB Blue
    digitalWrite(RED_Pin, LOW);   // send high voltage (5v) to the pin 10 to turn on the RGB Red
    
  } else {
    
    digitalWrite(BLUE_Pin, HIGH);    // send low high (5v) to the pin 11 to turn off the RGB Blue
    digitalWrite(GREEN_Pin, LOW);    // send low voltage (0v) to the pin 12 to turn off the RGB Green
    digitalWrite(RED_Pin, LOW);    // send low voltage (0v) to the pin 10 to turn off the RGB Red
    
  }

}