#include <Servo.h>

Servo	servo180r;
Servo	servo180l;
Servo lateralservo;
int		lowup = 65;
int		hup = 35;
int		down = 90;
int		mvmt = 200;
int		noire;
int		croche;
int		dbl_croche;
int		blanche;
int   triolet;

void  setup()
{
  croche = noire / 2;
  dbl_croche = noire / 4;
  triolet = noire / 3;
  blanche = noire * 2;
  servo180r.attach(9);
//  servo180l.attach(10);
  lateralservo.attach(10);
  servo180r.write(90);
  servo180l.write(90);
  lateralservo.write(90);
  delay(1000);
}

void	bothlowup() // both arms low up then down at the same time
{
	servo180r.write(lowup);
	servo180l.write(lowup);
	delay(mvmt);
	servo180r.write(down);
	servo180l.write(down);
  delay(100);
}

void	bothhup() // both arms high up then down at the same time
{
	servo180r.write(hup);
	servo180l.write(hup);
	delay(mvmt);
	servo180r.write(down);
	servo180l.write(down);
  delay(100);
}

void  rlowup() // right arm low up then down
{
  servo180r.write(lowup);
  delay(mvmt);
  servo180r.write(down);
  delay(100);
}

void  llowup() // left arm low up then down
{
  servo180l.write(lowup);
  delay(mvmt);
  servo180l.write(down);
  delay(100);
}

void  rhup() // right arm high up then down
{
  servo180r.write(hup);
  delay(mvmt);
  servo180r.write(down);
  delay(100);
}

void  lhup() // left arm high up then down
{
  servo180l.write(hup);
  delay(mvmt);
  servo180l.write(down);
  delay(100);
}

void loop()
{
  rhup();
  lateralservo.write(140);
  delay(1000);
  rhup();
  lateralservo.write(90);
  delay(200);
  rlowup();
  delay(1000);
  lateralservo.write(130);
  delay(500);
  lateralservo.write(90);
  delay(500);
}
