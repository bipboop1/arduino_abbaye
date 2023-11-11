#include <Servo.h>

Servo   servo;

void setup() {
  servo.attach(9);
  servo.write(0);
  delay(1000);
}

void loop() {
  //progressive:
  int   minpos = 0;
  int   maxpos = 90;
  int   i = 0;
  int   revdelay = maxpos - i;
  	for (i = minpos; i < maxpos; i++)
	{
		servo.write(i);
    int j = (i + (0.5*i)) * 0.5;
		delay(j);
	}
  delay(2000);
  	for (i = maxpos; i > minpos; i--)
	{
		servo.write(i);
    int j = (i + (0.5*i)) * 0.5;
    int maxj = (maxpos + (0.5*maxpos)) * 0.5;
    revdelay = maxpos - j - (maxpos - maxj); // done! [should replace 22.5 with variable so i can change the maxpos and minpos and everything sets up accordingly.]
		delay(revdelay);
	}
  delay(2000);

  //test for regular (delay = i) :
  	for (int i = minpos; i < maxpos; i++)
	{
		servo.write(i);
		delay(i);
	}
  delay(2000);
  	for (int i = maxpos; i > minpos; i--)
	{
		servo.write(i);
		delay(maxpos - i);
	}
  delay(2000);
}

/* CONCLUSION :
 this is adaptive but only good for 0 -> 90, delay gets too slow for bigger values.
 need to change the function completely for 90+
*/
