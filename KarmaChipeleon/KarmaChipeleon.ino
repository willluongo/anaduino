/*
  The Chipeleon
  Turns on and off LEDs to the beat of Karma Chameleon. It's pretty sweet.

  Most Arduinos have an on-board LED you can control. So I controlled it.
  The eyes blink at about 176 beats per minute. Sing Karma Chameleon to 
  the beat of Chip's eyes. Have fun!

  modified 13 December 2014
  by Ana
  */

  int leftEye = 11;
  int rightEye = 10;
  int delayTime = 341; // in MilliSeconds
  
// the setup function runs once when you press reset or power the board
void setup() {

  pinMode(leftEye, OUTPUT);
  pinMode(rightEye, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(leftEye, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rightEye, LOW);
  delay(delayTime);
  digitalWrite(leftEye, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(rightEye, HIGH);
  delay(delayTime);   // wait for 341 MilliSeconds
}
