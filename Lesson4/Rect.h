#pragma once

class Rect
{
	int width = 0;
	int length = 0;
public:
	Rect() { };
	Rect(int wid, int len) : width(wid), length(len) {};

	bool isEqual(const Rect& right) const
	{
		return (right.width == width  && length == right.length);
	}

	bool operator==(const Rect& right) const
	{
		return (right.width == width && length == right.length);

	};

};

void test()
{
	int a = 4, b = 8, c = 9;
	a = b + c;

	Rect r1, r2, r3;
	r2 = r1; //ok!

	if (r2.isEqual(r1))
	{

	}

	if (r2.operator==(r1))
	{

	}

	if (r2 == r1) { /*...*/ };


	//..
	//r1 += (r2 + r3); //compilation error
	
	//r1 += r2;//compilation error
	

}

