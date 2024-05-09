#include "Rational.h"

void test2(int a2)
{
	a2 = 99;
}
void test3(int& a3)
{
	a3 = 99;
}
void test(int v[], int s)
{
	for (size_t i = 0; i < s; i++)
	{
		cout << v[i] << " ";
	}
}

int main()
{

	Rational num1, num2;
	num1.mone = 11;
	num1.mechane = 55;
	num2.mone = 3;
	num2.mechane = 6;
	num1.print();
	num2.print();

	int x = 6;
	cout << x + 6 * 9;

	int v[4] = { 4,5,6,7 };

	test(v, 4);

	int* pv = new int[4] { 1, 2, 3, 4 };

	int a1 = 0;
	test2(a1);
	test3(a1);

	return 0;

}