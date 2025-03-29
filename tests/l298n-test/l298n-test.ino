/**
 * IN1 -> D3
 * IN2 -> D4
 * ENA -> D5
 */
 const int in1 = 3;
 const int in2 = 4;
 const int ena = 5;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);
  analogWrite(ena, 127);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(1000);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(1000);
}
