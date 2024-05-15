#include "Vector.h"

Vector::Vector(int s)
{
	numbers = new int[s];
	size = s;
	
	srand((unsigned)time(nullptr));

	for (int i = 0; i < size; i++)
		numbers[i] = rand() % 100;
}

Vector::~Vector()
{
	if (numbers)
		delete[] numbers;
	numbers = nullptr;
}

Vector::Vector(const Vector& v)
{
	numbers = new int[v.getSize()];

	size = v.getSize();

	for (int i = 0; i < size; i++)
		numbers[i] = v.numbers[i];

}


void Vector::print() const
{
	for (int i = 0; i < size; i++)
		cout << numbers[i] << " ";
	cout << endl;
}

void Vector::setValue(int pos, int val)
{
	if (pos < size)
		numbers[pos] = val;
}