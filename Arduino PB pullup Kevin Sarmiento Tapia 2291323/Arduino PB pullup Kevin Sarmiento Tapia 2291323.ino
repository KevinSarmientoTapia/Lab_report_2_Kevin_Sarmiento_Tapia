/*

 Arduino PB pullup

 The program's goal is to read if the pin is getting voltage or not by using pull up resistor and a PB.

 The theme is the use of Serial.Beging to see in the serial monitor whether the pin is getting voltage or not.

 */
void setup() { // void setup is the section of the program that runs once.
  
  pinMode(12,INPUT); // we set the pin 12 as an input as we want to read its value.
  Serial.begin(9600); // to display values in the serial monitor.

}

void loop() { // Void loop is the section of the program that runs forever.
  int button = digitalRead(12); // we set the variable button as the reading of the pin 12.
  Serial.println(button); // displays the value off the button in the serial monitor.

}
