#include <iostream>
#include <fstream>
using namespace std;

#include "Vector.h"


int main()
{
	string fileName;
	cin >> fileName;
	int count;
	cin >> count;

	fstream f;

	f.open(fileName, ios::in);
	if (!f)
	{
		cout << "ERROR\n";
		return -1;
	}

	Vector v(count);

	f >> v[0];
	int i = 1;
	while (!f.eof())
	{
		f >> v[i++];
	}

	v.sort();

	f.close();

	f.open(fileName, ios::out);
	if (!f)
	{
		cout << "ERROR\n";
		return -1;
	}

	for (int j = 0; j < v.getSize(); j++)
	{
		f << v[j] << endl;
	}
	
	f.close();




}