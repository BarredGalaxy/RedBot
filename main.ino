/*
 * ROBOT SCRIPT MAIN.
 * 
 * By Jack Dahl ( barred.ga )
*/

int statusLed = 13;
int horn = 7;

void setup() {
  pinMode(statusLed, OUTPUT);
  pinMode(horn, OUTPUT);
}

void loop() {
  digitalWrite(statusLed, HIGH);
  delay(500);
  digitalWrite(horn, HIGH);
  delay(500);
  digitalWrite(statusLed, LOW);
  delay(500);
  digitalWrite(horn, LOW);
  delay(500);
}
