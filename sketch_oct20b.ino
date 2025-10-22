/* this sketch is an intro to an analog write 
the data pins used in analog write are 3,5,6,9,10,11 i.e the pins with scribbles.
i will use an led, resitor, BB

*/
int myLed=9; // declare and initialize my variable   pin
int brightness=255; // test the brigtness of the led you put other values e.g 100,10,5,0,125 e.t.c
// the value 255 is the same as 5v on the arduino uno
void setup() {
  // put your setup code here, to run once:
pinMode(myLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(myLed,brigtness);
}
