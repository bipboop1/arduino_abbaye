#include <Servo.h>

Servo   servo180;
Servo   servo360;

void setup() {
servo180.attach(9);
servo180.write(90);
delay(1000);
servo360.attach(11);
servo360.write(90);
delay(1000);
}

void loop() {
servo180.write(110);
delay(1000);
servo360.write(80);
for (int i = 110; i > 65; i--)
{
  servo180.write(i);
  delay(50);
  if (i == 100)
	servo360.write(110);
  if (i == 85)
	servo360.write(85);
}
servo360.write(90);
delay(1000);
}