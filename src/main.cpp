#include <Arduino.h>

// alguma coisa

void setup() {
  pinMode(12, INPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  if(digitalRead(12) == LOW){
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  delay(100);
}