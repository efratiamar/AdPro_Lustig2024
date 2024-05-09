#pragma once
#include <iostream>
using namespace std;

class Rational
{
private:
	int mone;
	int mechane;

public:
	void print1() { cout << mone << "/" << mechane << endl; };
	void print2();

	void setMone(int mo);
	int getMone();

	void setMechane(int me);
	int getMechane();

	void mult(Rational right );

};


