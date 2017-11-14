


#define INPIN  7
#define OUTPIN 13

// the setup function runs once when you press reser ot power the board
void setup() {
  // intialize digital pin LED_BUILTIN as an output.
  pinMode (OUTPIN, OUTPUT);
  pinMode (INPIN, INPUT); 

}

// the loop functionb runs over and over again forever
void loop() {
  bool button;
  button = digitalRead(INPIN);
  digitalWrite(OUTPIN, button); // turn the LED on (HIGH is the voltage level)
}
