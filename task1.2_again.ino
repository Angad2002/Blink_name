/*

NAME -->       ANGAD SINGH DHALIWAL
STUDENT ID --> 2010993004

With the help of arduino nano I am going to blink my name via inbuilt led of arduino board by using "MORSE CODE".

*/

void setup() {

pinMode(LED_BUILTIN, OUTPUT); // digital pin LED_BUILTIN is initialized as an output.
}

void displayDot() {
digitalWrite(LED_BUILTIN, HIGH); // turns the LED on
delay(500); // LED remains on for 1/2 seconds
digitalWrite(LED_BUILTIN, LOW); // turns the LED off
delay(500); // LED remains off for 1/2 seconds
}

void displayDash() {
digitalWrite(LED_BUILTIN, HIGH); // turns the LED on
delay(1000); // LED remains on for 1 second
digitalWrite(LED_BUILTIN, LOW); // turns the LED off
delay(500); // LED remains off for 1/2 second
}

void loop() {
/*

My name in Morse's code:

A(._), N(_.), G(_ _.), A(._), D(_..)

*/

//  A 
displayDot();
displayDash();

//  N 
displayDash();
displayDot();
delay(2000); 

//  G 
displayDash();
displayDash();
displayDot();
delay(2000); 

//  A 
displayDot();
displayDash();
delay(2000); 

//  D
displayDash();
displayDot();
displayDot();
delay(2000); 

}
