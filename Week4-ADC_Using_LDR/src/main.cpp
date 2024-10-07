#include <Arduino.h>
#include <OneButton.h>


void setup() {
  Serial.begin(115200);


}

void loop() {
  int value = analogRead(A_PIN);
  Serial.print(">plot1:");
  Serial.println(value);
  delay(500);
}


