#include <Arduino.h>

#define sensorA 12
#define sensorB 25
#define ledA 5
#define ledB 19

// alguma coisa

void setup() {
  Serial.begin(115200);
  pinMode(sensorA, INPUT);
  pinMode(sensorB, INPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  Serial.println("All pins set");
}

void loop() {
  if(digitalRead(sensorA) == LOW){
    digitalWrite(ledA, HIGH);
    Serial.print("Sensor A detected!");
  } else {
    digitalWrite(ledA, LOW);
    Serial.print("Sensor A away!");
  }

  if(digitalRead(sensorB) == LOW){
    digitalWrite(ledB, HIGH);
    Serial.println("    Sensor B detected!");
  } else {
    digitalWrite(ledB, LOW);
    Serial.println("    Sensor B away!");
  }

  delay(100);
}