#include "Rect.h"
#include <iostream>
using namespace std;

int main()
{
	Rect r1;
	r1.printArea();
	r1.operation(33);


	Rect r2(3,7);
	r2.setL(77);

	r2.printArea();

	Rect r3(4);

}