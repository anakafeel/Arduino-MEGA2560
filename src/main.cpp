#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

const int led = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);  
  delay(2000);             
  digitalWrite(led, LOW);  
  delay(2000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}