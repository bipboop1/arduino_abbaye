#include <Servo.h>

Servo   servo_hdbg;
Servo   arm;

void  setup()
{
  servo_hdbg.attach(9);
  arm.attach(12);
  servo_hdbg.write(90);
  arm.write(90);
  delay(1000);
}

void  loop()
{
  arm.write(120);
  delay(100);
  servo_hdbg.write(120);
  delay(200);
  arm.write(80);
  servo_hdbg.write(90);
  delay(100);
  arm.write(130);
  delay(100);
  arm.write(90);
  delay(500);
}