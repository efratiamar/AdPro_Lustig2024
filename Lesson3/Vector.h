#pragma once
#include <iostream>
using namespace std;

class Vector
{
	int* numbers;
	int size;
public:
	Vector(int s = 10);
	~Vector();
	Vector(const Vector& v);

	int getSize() const
	{
		return size;
	}

	void setValue(int pos, int val);

	void print() const;

};
