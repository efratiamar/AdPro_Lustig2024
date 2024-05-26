#include "Rational.h"

int main()
{
	Rational r1(3, 4);

	Rational r2(3, 4);

	if (r1 == r2)
	{	}

	Rational r3;

	r3 = r1 + r2;

	r3 = r2 = r1;

	r3 += r2; // r3 = r3 + r2;

	r1 = r3 += r2;

}