#define T1 A0
#define T2 A1
#define T3 A2

int IR1;
int IR2;
int IR3;

void setup() {
Serial.begin(9600);
pinMode(T1, INPUT);
pinMode(T2, INPUT);
pinMode(T3, INPUT);
}

void loop() {
IR1 = analogRead(T1);
IR2 = analogRead(T2);
IR3 = analogRead(T3);
Serial.print("           ");
Serial.print(IR1);
Serial.print("         ");
Serial.print(IR2);
Serial.print("         ");
Serial.println(IR3);
}
