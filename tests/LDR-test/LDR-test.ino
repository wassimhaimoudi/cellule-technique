#define LDR A1  

unsigned int value;
 
void setup() {

   Serial.begin(9600);
   pinMode(LDR, INPUT);
}
 
void loop() {

   value = analogRead(LDR);
   Serial.println(value);

   delay(200);
}
