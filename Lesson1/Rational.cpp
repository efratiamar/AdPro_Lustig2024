#include "Rational.h"

void Rational::print2()
{
	cout << mone << "/" << mechane << endl;
};

void Rational::setMechane(int me)
{
	if (me != 0)
		mechane = me;
	else
		mechane = 1;
}

void  Rational::setMone(int mo)
{
	mone = mo;
}

int Rational::getMone()
{
	return mone;
}

int Rational::getMechane()
{
	return mechane;
}

void Rational::mult(Rational right)
{
	cout << mone * right.mone 
<< "/" << mechane * right.mechane << endl;
}