#include <SoftwareSerial.h>
SoftwareSerial  BTSerial(2, 3); //RX TX
int yPin = A1;
int yVal = 0;


void setup() {
  BTSerial.begin(9600); 
  Serial.begin(9600);
  pinMode(yPin, INPUT);
}

void loop() {
  yVal = analogRead(yPin);
  BTSerial.println(String(yVal));
  Serial.println(String(yVal));
  delay(500);
}

