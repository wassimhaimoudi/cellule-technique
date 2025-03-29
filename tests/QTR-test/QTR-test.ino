/*
 * This Arduino sketch reads values from 8 analog sensors (IR sensors) connected to the 
 * analog pins A0 to A7 and sends these values to the Serial Monitor.
 * 
 * Pin assignments:
 * ir1 - A0
 * ir2 - A1
 * ir3 - A2
 * ir4 - A3
 * ir5 - A4
 * ir6 - A5
 * ir7 - A6
 * ir8 - A7
 * 
 * The sensor values are read using `analogRead()` function and stored in 8 variables.
 * These values are then printed to the Serial Monitor for observation in the format:
 * "s1 s2 s3 s4 s5 s6 s7 s8"
 * Each sensor value is separated by a few spaces for better readability.
 * 
 * The Serial communication is set at a baud rate of 9600 bps for communication with 
 * the Serial Monitor.
 */

#define ir1 A0
#define ir2 A1
#define ir3 A2
#define ir4 A3
#define ir5 A4
#define ir6 A5
#define ir7 A6
#define ir8 A7

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
  pinMode(ir6, INPUT);
  pinMode(ir7, INPUT);
  pinMode(ir8, INPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned short int s1 = analogRead(ir1);  
  unsigned short int s2 = analogRead(ir2);  
  unsigned short int s3 = analogRead(ir3);  
  unsigned short int s4 = analogRead(ir4);  
  unsigned short int s5 = analogRead(ir5);  
  unsigned short int s6 = analogRead(ir6);  
  unsigned short int s7 = analogRead(ir7);  
  unsigned short int s8 = analogRead(ir8);
  Serial.print("    ");
  Serial.print(s1);
  Serial.print("    ");
  Serial.print(s2);
  Serial.print("   ");
  Serial.print(s3);
  Serial.print("    ");
  Serial.print(s4);
  Serial.print("   ");
  Serial.print(s5);
  Serial.print("   ");
  Serial.print(s6);
  Serial.print("    ");
  Serial.print(s7);
  Serial.print("   ");
  Serial.println(s8);
}
