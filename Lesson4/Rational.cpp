#include "Rational.h"

bool Rational::operator==(const Rational& num) const
{
	return (mone == num.getMone() && mechane == num.getMechane());
};

bool Rational::operator!=(const Rational& num) const
{
	return !(num == *this);
};

Rational Rational::operator+(const Rational& num) const
{
	Rational tmp;

	tmp.setMone(mone * num.getMechane() + num.getMone() * mechane);

	tmp.setMechane(mechane * num.getMechane());

	return tmp;
}

Rational& Rational::operator+=(const Rational& num)
{
	*this = *this + num;
	//return *this;
}
//r1 =r2 = r3;;
Rational& Rational::operator=(const Rational& num)
{
	mone = num.getMone();
	mechane = num.getMechane();
	return *this;
}



