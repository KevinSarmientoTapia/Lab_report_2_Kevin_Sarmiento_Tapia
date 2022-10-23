/*
 RGB color selector
 
 The program's goal is to be able to choose any color an display it with the RGB

 The theme is analogWrite to change the level of brightness of the pins.
*/ 
int RED_Pin=10; // creates a variable called RED_Pin with a value of 10
int GREEN_Pin=11; // creates a variable called GREEN_Pin with a value of 11
int BLUE_Pin=9; // creates a variable called BLUE_Pin with a value of 9
void setup() // this program runs once.
{
  pinMode(RED_Pin, OUTPUT); // set RED_Pin as output
  pinMode(GREEN_Pin, OUTPUT); // set GREEN_Pin as output
  pinMode(BLUE_Pin, OUTPUT); // set BLUE_Pin as output
}
void loop() // this program runs forever.
{
  analogWrite(RED_Pin, 255); // sent 5v to RED_Pin
  analogWrite(GREEN_Pin, 175); // sent 2.5V to GREEn_Pin 
  analogWrite(BLUE_Pin, 0); // sent 0v BLUE_Pin

}