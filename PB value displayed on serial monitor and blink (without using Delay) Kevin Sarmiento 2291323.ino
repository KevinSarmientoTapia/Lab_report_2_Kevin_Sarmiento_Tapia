/* 
 PB value displayed on serial monitor and blink (without using Delay)

 This program's goal is to blink a LED and at the same time read the value of a pin in a pullup resistor.

 The theme is millis() to start counting as a clock.
*/
const int ledPin =  12; // variable ledPin will be 12

int ledState = LOW; // LED will be off             

unsigned long previousMillis = 0; // variable previousMillis will be 0        

const long interval = 1000; // variable interval will be 1000         

void setup() { // this program runs once
  
  pinMode(2, INPUT); // pin 2 set as an INPUT
  pinMode(ledPin, OUTPUT); // pin 12 set as an OUTPUT
  Serial.begin(9600); // serial monitor starts

}

void loop() { // this program runs forever
int button=digitalRead(2); // the variable button will have the same value as digitalRead(2)
  unsigned long currentMillis = millis(); // curretMillis will strat counting

  if (currentMillis - previousMillis >= interval) { // if currentMillis minus previousMillis is lower or equal to interval, then:
    
    previousMillis = currentMillis; // previousMillis and currentMillis will be the same
    
    if (ledState == LOW) { // if ledState is LOW, then:
      ledState = HIGH; // the value inverts, now LED turns on
    } else { // if the statement before is not true, then:
      ledState = LOW; // the LED states off
    }
    
    digitalWrite(ledPin, ledState); // the LED will turn on or off depending of the value off ledState
  }
Serial.println(button); // serial monitor will print the value of button
}