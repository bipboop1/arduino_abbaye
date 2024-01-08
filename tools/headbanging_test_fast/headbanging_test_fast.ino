#include <Servo.h>

Servo serv360;

void  setup()
{
  serv360.attach(10);
  serv360.write(90);
  delay(1000);
}

void  loop()
{
  serv360.write(0);
  delay(2000);
  serv360.write(166);
  delay(2000);
  serv360.write(90);
  delay(1000);
}