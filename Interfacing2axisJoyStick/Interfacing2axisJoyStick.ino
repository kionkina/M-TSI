#include<SoftwareSerial.h>
SoftwareSerial BTSerial(2,3);
String send_val = "";
void setup() {
  BTSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  int pin1 = analogRead(A0);
  int pin2 = analogRead(A1);

  send_val = "X" + (String)pin1 + "Y" + (String)pin2;
  BTSerial.println(send_val);
  delay(280);
}
