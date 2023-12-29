#include <Servo.h>

Servo   servo180;

void setup()
{
  servo180.attach(9);
  servo180.write(90);
  delay(1000);
}

void loop()
{
//  servo180.write(90);
//  delay(200);
  servo180.write(180);
  delay(200);
  servo180.write(80);
  delay(500);
}
