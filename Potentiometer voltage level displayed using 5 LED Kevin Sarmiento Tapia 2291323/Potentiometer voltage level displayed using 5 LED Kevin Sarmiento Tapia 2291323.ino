/*
 Potentiometer voltage level displayed using 5 LED
 
 The program's goal is to use a potentiometer to gradually start turning on the LEDs one by one.

 The theme is the use of if and else if to strat turning the LEDs on.
*/
int RED_Pin=2; // The variable RED_Pin will have a value of 2
int GREEN_Pin=3; // The variable GREEN_Pin will have a value of 3
int YELLOW_Pin=4; // The variable YELLOW_Pin will have a value of 4
int BLUE_Pin=5; // The variable BLUE_Pin will have a value of 5
int WHITE_Pin=6; // The variable WHITE_Pin will have a value of 6
void setup() { // This program will run once

pinMode(A0, INPUT); // pin A0 will be an INPUT
pinMode(RED_Pin, OUTPUT); // pin RED_Pin will be an OUTPUT
pinMode(GREEN_Pin, OUTPUT); // pin GREEN_Pin will be an OUTPUT
pinMode(YELLOW_Pin, OUTPUT); // pin YELLOW_Pin will be an OUTPUT
pinMode(WHITE_Pin, OUTPUT); // pin WHITE_Pin will be an OUTPUT
Serial.begin(9600); // the serial monitor starts.

}

void loop() { // this program will run forever

int PM=analogRead(A0); // the variable PM will be equal to the value of analogRead(A0).
Serial.println(PM); // serial monitor displays the value of PM to verify the results.
if (PM < 100 ){ // if PM is lower than 100, then:
 digitalWrite(RED_Pin, LOW); // the RED _Pin will be off
 digitalWrite(GREEN_Pin, LOW); // the GREEN_Pin will be off
 digitalWrite(YELLOW_Pin, LOW); // the YELLOW_Pin will be off
 digitalWrite(BLUE_Pin, LOW); // the BLUE_Pin will be off
 digitalWrite(WHITE_Pin, LOW); // the WHITE_Pin will be off
} else if (PM < 205 ){ // if PM is lower than 205, then:
 digitalWrite(RED_Pin, HIGH); // the RED _Pin will be on
 digitalWrite(GREEN_Pin, LOW);  // the GREE _Pin will be off
 digitalWrite(YELLOW_Pin, LOW); // the YELLOW _Pin will be off
 digitalWrite(BLUE_Pin, LOW); // the BLUE _Pin will be off
 digitalWrite(WHITE_Pin, LOW); // the WHITE _Pin will be off
} else if (PM < 409 ){ // if PM is lower than 409, then:
 digitalWrite(RED_Pin, HIGH); // the RED _Pin will be on
 digitalWrite(GREEN_Pin, HIGH); // the GREEN _Pin will be on
 digitalWrite(YELLOW_Pin, LOW); // the YELLOW _Pin will be off
 digitalWrite(BLUE_Pin, LOW); // the BLUE _Pin will be off
 digitalWrite(WHITE_Pin, LOW); // the WHITE _Pin will be off
} else if (PM < 611 ){ // if PM is lower than 611, then:
 digitalWrite(RED_Pin, HIGH); // the RED _Pin will be on
 digitalWrite(GREEN_Pin, HIGH); // the GREEN _Pin will be on
 digitalWrite(YELLOW_Pin, HIGH); // the YELLOW _Pin will be on
 digitalWrite(BLUE_Pin, LOW); // the BLUE _Pin will be off
 digitalWrite(WHITE_Pin, LOW); // the WHITE _Pin will be off
} else if (PM < 815 ){ // if PM is lower than 815, then:
 digitalWrite(RED_Pin, HIGH); // the RED _Pin will be on
 digitalWrite(GREEN_Pin, HIGH); // the GREEN _Pin will be on
 digitalWrite(YELLOW_Pin, HIGH); // the YELLOW _Pin will be on
 digitalWrite(BLUE_Pin, HIGH); // the BLUE _Pin will be on
 digitalWrite(WHITE_Pin, LOW); // the WHITE _Pin will be off
} else if (PM < 1024 ){ // if PM is lower than 1024, then:
 digitalWrite(RED_Pin, HIGH); // the RED _Pin will be on
 digitalWrite(GREEN_Pin, HIGH); // the GREEN _Pin will be on
 digitalWrite(YELLOW_Pin, HIGH); // the YELLOW _Pin will be on
 digitalWrite(BLUE_Pin, HIGH); // the BLUE _Pin will be on
 digitalWrite(WHITE_Pin, HIGH); // the WHITE _Pin will be on
}

}
