#define T1 A0
int IR1;

void setup() {
 Serial.begin(9600);
pinMode(T1, INPUT);
}

void loop() {
IR1 = analogRead(T1);
Serial.print("           ");
Serial.println(IR1);
}
