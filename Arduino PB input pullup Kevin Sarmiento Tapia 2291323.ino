/*

 Arduino PB input pullup

 The program's goal is to read if the pin is getting voltage or not by using the resistor inside the arduino as a pull up resistor and a PB.

 The theme is the use of Serial.Beging to see in the serial monitor whether the pin is getting voltage or not.

 */
void setup() { // void setup is the section of the program that runs once.
  
  pinMode(9,INPUT_PULLUP); // we set the pin 9 as INPUT_PULLUP as we want to read its value and use the resistor inside the arduino.
  Serial.begin(9600); // to display values in the serial monitor.

}

void loop() { // Void loop is the section of the program that runs forever.
  int button = digitalRead(9); // we set the variable button as the reading of the pin 9.
  Serial.println(button); // displays the value off the button in the serial monitor.

}