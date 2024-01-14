#include <Servo.h>

Servo   Rarm;
Servo   Larm;
Servo   head;

void  setup()
{
  Rarm.attach(9);
  Larm.attach(10);
  head.attach(12);
  Rarm.write(90);
  Larm.write(90);
  head.write(120);
  delay(1000);
}

void  loop()
{
  
}
