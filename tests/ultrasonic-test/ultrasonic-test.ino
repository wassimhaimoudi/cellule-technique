#include <Ultrasonic.h>
Ultrasonic ultrasonic(9, 10);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Distance: ");
  Serial.print(ultrasonic.read());
  Serial.println(" cm");
}
