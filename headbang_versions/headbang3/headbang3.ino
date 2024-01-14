
#include <Servo.h>

Servo   head;
int   i = 0;
int   j = 0;
int   down = 60;
int   up = 120;
int   dly = 10;
int   tempo = 500;
int   full_tick = tempo - 300;
int   lvl = 0;

void  setup()
{
  head.attach(12);
  head.write(90);
  delay(1000);
}

void  loop()
{
  lvl = down;
  i = 0;
  while (lvl++ <= up)
  {
    head.write(lvl);
    delay(5);
  }
  delay(full_tick);
}
