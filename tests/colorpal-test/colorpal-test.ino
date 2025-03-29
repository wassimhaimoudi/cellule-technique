#include <ColorPAL.h>

ColorPAL sensor;

void setup()
{
  sensor.attachPAL(12);           
  Serial.begin(9600);
}

void loop()
{
  int red = sensor.redPAL();            
  int green = sensor.greenPAL();      
  int blue = sensor.bluePAL();          
  Serial.print(red); Serial.print(" ");
  Serial.print(green); Serial.print(" ");
  Serial.println(blue);
}
