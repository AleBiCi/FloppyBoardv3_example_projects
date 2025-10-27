#include <Arduino.h>

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  pinMode(PC15, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PC15, HIGH);
  delay(300);
  digitalWrite(PC15, LOW);
  delay(300);
}
