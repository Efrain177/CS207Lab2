/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

int led = 10;
int uTime = 50;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

void dot(){
  digitalWrite(led, HIGH);
  delay(uTime);
  digitalWrite(led, LOW);
  delay(uTime);
}

void dash(){
  digitalWrite(led, HIGH);
  delay(3*uTime);
  digitalWrite(led, LOW);
  delay(uTime);
}

void dotF(){
  digitalWrite(led, HIGH);
  delay(uTime);
  digitalWrite(led, LOW);
  delay(3*uTime);
}

void dashF(){
  digitalWrite(led, HIGH);
  delay(3*uTime);
  digitalWrite(led, LOW);
  delay(3*uTime);
}

void wSpace(){
  delay(7*uTime);
}

// the loop function runs over and over again forever
void loop() {

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
