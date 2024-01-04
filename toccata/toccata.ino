#include <Servo.h>

Servo	servo180r;
Servo	servo180l;
int		lowup = 130;
int		hup = 180;
int		down = 90;
int		mvmt = 200;

/*
void	2lowup() // both arms low up then down at the same time
{
	servo180r.write(lowup);
	servo180l.write(lowup);
	delay(mvmt);
	servo180r.write(down)
	servo180l.write(down);
}
*/

/*
void	2hup() // both arms high up then down at the same time
{
	servo180r.write(lowup);
	servo180l.write(lowup);
	delay(mvmt);
	servo180r.write(down)
	servo180l.write(down);
}
*/

void	setup()
{
	servo180r.attach(9);
	servo180l.attach(10);
	servo180r.write(90);
	servo180l.write(90);
	delay(1000);
}

void	loop()
{
	servo180r.write(lowup);
	servo180l.write(lowup);
	delay(mvmt);
	servo180r.write(down);
	servo180l.write(down);
	delay(500);
	servo180r.write(hup);
	servo180l.write(hup);
	delay(mvmt);
	servo180r.write(down);
	servo180l.write(down);
	delay(500);
	delay(5000);
//	2lowup;
	delay(500);
//	2hup;
	delay(500);
}
