/*
Potentiometer change RGB color from black to white through different color
variations

The program's goal is to be able to change the color of the LCD in many different ways using the potentiometer.

The theme is the use of if and else to change RGB colors.
*/ 
float v; // creates the variable v
float RGB; // creates the variable RGB
int sensorValue; // creates the variable sensorValue
void setup() { 

pinMode(A0,INPUT); // set A0 as an input
pinMode(8,OUTPUT); // set pin 8 as an output
pinMode(9,OUTPUT); // set pin 9 as an output
pinMode(10,OUTPUT); // set pin 10 as an output

}
void loop() {
sensorValue=analogRead(A0); // variable sensorValue will be analogRead(A0)
v=sensorValue*5/1023; // this is to convert bits into voltage value
RGB=(255*sensorValue)/1023; // this is to convert bits into RGB color code

if(v>=0.2){ // if v is more or equal to 0.2, then:
  analogWrite(8,RGB); // pin 8 will be on
} else{ // if not, then:
  analogWrite(8,0); // pin 8 will be off
};

if(v>=1.3){ // if v is equal or more than 1.3, then:
  analogWrite(9,RGB); // pin 9 will be on
} else{ // if not, then:
  analogWrite(9,0); // pin 9 will be off
};

if(v>=4.5){ // if v is equal or more than 4.5, then:
  analogWrite(10,RGB); // pin 10 will be on
} else{ // if not, then: 
  analogWrite(10,0); // pin 10 will be off
};
}