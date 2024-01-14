#include <Servo.h>

Servo	Rarm;
Servo	Larm;
Servo head;

// arms :
int		lowup = 65;
int   Rlowup = 180 - lowup; // right and left arms are different bc i installed them wrong
int		hup = 35;
int   Rhup = 180 - hup; // same
int		down = 90;
int		mvmt = 200;

//head :
int   headown = 60;
int   headup = 120;

// notes (unused) :
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
  Rarm.attach(9);
  Larm.attach(10);
  head.attach(12);
  Rarm.write(90);
  Larm.write(90);
  head.write(120);
  delay(1000);
}

void	bothlowup() // both arms low up then down at the same time
{
	Rarm.write(Rlowup);
	Larm.write(lowup);
	delay(mvmt);
	Rarm.write(down);
	Larm.write(down);
  delay(100);
}

void	bothhup() // both arms high up then down at the same time
{
	Rarm.write(Rhup);
	Larm.write(hup);
	delay(mvmt);
	Rarm.write(down);
	Larm.write(down);
  delay(100);
}

void  rlowup() // right arm low up then down
{
  Rarm.write(Rlowup);
  delay(mvmt);
  Rarm.write(down);
  delay(100);
}

void  llowup() // left arm low up then down
{
  Larm.write(lowup);
  delay(mvmt);
  Larm.write(down);
  delay(100);
}

void  rhup() // right arm high up then down
{
  Rarm.write(Rhup);
  delay(mvmt);
  Rarm.write(down);
  delay(100);
}

void  lhup() // left arm high up then down
{
  Larm.write(hup);
  delay(mvmt);
  Larm.write(down);
  delay(100);
}

void loop()
{
  head.write(headown);
  bothlowup();
  head.write(headup);
  delay(100);
  rhup();
  lhup();
  head.write(headown);
  delay(300);
  rlowup();
  head.write(headup);
  delay(1000);
}
