int buzzerpin = 13;
// Sets the Piezo piece to digital pin 13. Arduino can now receive and transmit information to this digital pin.

const int button1c = 0;
const int button2d = 1;
const int button3e = 2;
const int button4f = 3;
const int button5g = 4;
const int button6a = 5;
const int button7b = 6;
const int button8C = 7;
const int button9cs = 8;
const int button10eb = 9;
const int button11fs = 10;
const int button12gs = 11;
const int button13bb = 12;
// Sets all buttons to one digital pin on the Arduino board.

int button1cState = 0;
int button2dState = 0;
int button3eState = 0;
int button4fState = 0;
int button5gState = 0;
int button6aState = 0;
int button7bState = 0;
int button8CState = 0;
int button9csState = 0;
int button10ebState = 0;
int button11fsState = 0;
int button12gsState = 0;
int button13bbState = 0;
// On start-up sets the state of all buttons to "Off" mode.

void setup() {
  // put your setup code here, to run once:

pinMode(buzzerpin, OUTPUT);
// Declares the buzzerpin as the output for information. Makes it so that sound comes out of the piezo piece
pinMode(button1c, INPUT);
pinMode(button2d, INPUT);
pinMode(button3e, INPUT);
pinMode(button4f, INPUT);
pinMode(button5g, INPUT);
pinMode(button6a, INPUT);
pinMode(button7b, INPUT);
pinMode(button8C, INPUT);
pinMode(button9cs, INPUT);
pinMode(button10eb, INPUT);
pinMode(button11fs, INPUT);
pinMode(button12gs, INPUT);
pinMode(button13bb, INPUT);
// Declares the buttons as the input for information. Any buttons pressed will be an input for the Arduino and the code to interpret.
}


void loop() 
{
  // put your main code here, to run repeatedly:
  
if (button1cState == LOW) {
  tone(buzzerpin, 262);
} else if (button2dState == LOW) {
  tone(buzzerpin, 294);
} else if (button3eState == LOW) {
  tone(buzzerpin, 330);
} else if (button4fState == LOW) {
  tone(buzzerpin, 349);
} else if (button5gState == LOW) {
  tone(buzzerpin, 392);
} else if (button6aState == LOW) {
  tone(buzzerpin, 440);
} else if (button7bState == LOW) {
  tone(buzzerpin, 494);
} else if (button8CState == LOW) {
  tone(buzzerpin, 523);
} else if (button9csState == LOW) {
  tone(buzzerpin, 277);
} else if (button10ebState == LOW) {
  tone(buzzerpin, 311);
} else if (button11fsState == LOW) {
  tone(buzzerpin, 370);
} else if (button12gsState == LOW) {
  tone(buzzerpin, 415);
} else if (button13bbState == LOW) {
  tone(buzzerpin, 466);
} else {
  noTone(buzzerpin);
}
// This is what makes every button do its specific task. When a button is pressed the state of the button is low. With this information we can make it so that when the buttonstate
// of a button is low it can play a specific sound or frequency. When no button is pressed we will make no sounds or frequencies come from the Piezo piece.

button1cState = digitalRead(button1c);
button2dState = digitalRead(button2d);
button3eState = digitalRead(button3e);
button4fState = digitalRead(button4f);
button5gState = digitalRead(button5g);
button6aState = digitalRead(button6a);
button7bState = digitalRead(button7b);
button8CState = digitalRead(button8C);
button9csState = digitalRead(button9cs);
button10ebState = digitalRead(button10eb);
button11fsState = digitalRead(button11fs);
button12gsState = digitalRead(button12gs);
button13bbState = digitalRead(button13bb);
// Sets the button state as either "HIGH" or "LOW". In other words, it will make a numerical value from when the button its pressed and change it to a variable such as "HIGH" or "LOW". 
// When a button is pressed the state of the button will be changed to "LOW". When it isn't pressed the state will be "HIGH".
}
