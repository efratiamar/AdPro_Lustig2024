#include "Point.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1, p2(3,5.7);

	float d = p2.distance(p1);

	p2.setX(7.6);
	//...

	Circle A, B, C;
	
	float x, y, r;
	//cout << ...
	cin >> x >> y >> r;

	Point pCenterA(x, y);
	A.setCenter(pCenterA);
	//A.setCenter( Point(x,y));
	A.setRadius(r);

	Point pCenterB(x, y);
	B.setCenter(pCenterB);
	B.setRadius(r);

	Point pCenterC(x, y);
	C.setCenter(pCenterC);
	C.setRadius(r);

	Point p;
	//cout ...
	cin >> x >> y >> r;
	p.setX(x);
	p.setY(y);

	int cntA = 0;
	int cntB = 0;
	int cntC = 0;


	while (p.getX() != 0 && p.getY() != 0);
	{

		if (A.onInOut(p) <= 0)
			cntA++;
		if (B.onInOut(p) <= 0)
			cntB++;
		if (C.onInOut(p) <= 0)
			cntC++;

		//cout ...
		cin >> x >> y >> r;
		p.setX(x);
		p.setY(y);
	} 

	cout << cntA << " " << cntB << " " << cntC;
}