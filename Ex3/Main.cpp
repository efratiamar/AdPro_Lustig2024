#include "Vector.h"

Vector randomVector()
{
	int size = rand() % 10 + 1;
	Vector v(size);
	//...
	//...
	v.print();

	return move(v);
	//return v;
}

int main()
{
	srand((unsigned)time(nullptr));

	cout << "Test 1:\n";
	Vector vec1;
	for (int i = 10; i > 0; i--)
	{
		vec1.addLast(i);
		cout << vec1.getSize() << " ";
	}
	cout << endl;

	vec1.print();
	vec1.sort();
	vec1.print();

	if (!vec1.isEmpty())
		cout << vec1.lastValue() << " ";

	if (!vec1.isEmpty())
		cout << vec1.removeLast() << " ";

	if (!vec1.isEmpty())
		cout << vec1.removeLast() << " ";

	vec1.addLast(100);
	vec1.addLast(101);
	vec1.addLast(102);

	vec1.print();
	
	int s = vec1.getSize();
	for (int i = 0; i < s; i++)
	{
		cout << vec1.at(i) << " ";
	}
	cout << endl;

	return 0;
}
