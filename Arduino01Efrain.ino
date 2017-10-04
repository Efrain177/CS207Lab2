/*
  Blinker Morse Code

  Makes a LED blink to give a code in morse code.
  
  Code for the Lab 2 of the CS 207 class in University of Regina.
  modified 28 Sep 2017
  by Efrain Chavez

  
*/

int led = 10;
int uTime = 50;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

//create a method for calling dot in morse code
void dot(){
  digitalWrite(led, HIGH);
  delay(uTime);
  digitalWrite(led, LOW);
  delay(uTime);
}

//Create a method for calling dash in morse code
void dash(){
  digitalWrite(led, HIGH);
  delay(3*uTime);
  digitalWrite(led, LOW);
  delay(uTime);
}

//create a methof for calling a dot and space between letters
void dotF(){
  digitalWrite(led, HIGH);
  delay(uTime);
  digitalWrite(led, LOW);
  delay(3*uTime);
}

//create a methof for calling a dash and space between letters
void dashF(){
  digitalWrite(led, HIGH);
  delay(3*uTime);
  digitalWrite(led, LOW);
  delay(3*uTime);
}

//method for calling space between words
void wSpace(){
  delay(7*uTime);
}

// the loop function runs over and over again forever
void loop() {

  //I'll use the methods created before to easily call the 
  //message "FEED ME TACOS AND PIZZA"
  //F dot dot dash dot
  dot();
  dot();
  dash();
  dotF();
  
  //E dot
  dotF();
  //E dot
  dotF();
  //D dash dot dot
  dash();
  dot();
  dot();
  
  // space
  wSpace();
  //M dash dash
  dash();
  dashF();
  //E dot
  dotF();
  //
  wSpace();
  //T - dash
  dashF();
  
  //A - dot dash
  dot();
  dashF();
  //C - dash dot dash dot
  dash();
  dot();
  dash();
  dotF();
  //O - dash dash dash
  dash();
  dash();
  dashF();
  //S - dot dot dot
  dot();
  dot();
  dotF();
  // space
  wSpace();
  //A dot dash
  dot();
  dashF();
  //N dash dot
  dash();
  dotF();
  //D dash dot dot
  dash();
  dot();
  dotF();
  //
  wSpace();
  //P dot dash dash dot
  dot();
  dash();
  dash();
  dotF();
  
  //I dot dot
  dot();
  dotF();
  //Z dash dash dot dot
  dash();
  dash();
  dot();
  dotF();
  //Z dash dash dot dot
  dash();
  dash();
  dot();
  dotF();
  //A dot dash
  dot();
  dashF();
  
}
