/*
 voltimeter 

 the program's goal is to create a voltimeter using the potentiometer's reading.

 the theme is makeign the arduino to make maths to gives us the voltage value is stead of just the bits.

*/
float y; // the variable y will be able to be a decimal number.
float a=5; // the variable a will be 5.
float b=1023; // the variable b will be 1023.
void setup() { // this program will run once.
  Serial.begin(9600); // the serial monitor starts.
}
void loop() { // this program will run forever.
  int sensorValue = analogRead(A0); // the variable sensorValue will have the same value as analogRead(A0).
   y = sensorValue*a/b; // arduino starts to do maths to convert the value of sensorValue into volts value.
  Serial.print(sensorValue); // serial monitor displays print sensor Value's value.
  Serial.print(" "); // serial monitor prints space.
  Serial.print("="); // serial monitor prints equal.
  Serial.print(" "); // serial monitor prints space.
  Serial.print(y); // serial monitor displays y's value.
  Serial.println("V"); // serial monitor prints V.
  delay(1);  // whait 1 second.
}