#pragma once
#include "Point.h"

const float PI = 3.14;


class Circle
{
	Point center;
	float radius;

public:

	Circle (float _r=1, float _x=0, float _y=0 ) 
		: radius(_r)
	{
		/*
		center.setX(_x);
		center.setY(_y);
		*/
		center.x = _x;
		center.y =  _y;;
	}

	Circle(const Circle& c)
	{
		//center = c.getCenter();
		center = c.center;
		radius = c.getRadius();
	}

	void setCenter(float _x, float _y)
	{
		center.setX(_x);
		center.setY(_y);
	}
	void setCenter(const Point& p2)
	{
		center.setX(p2.getX());
		center.setY(p2.getY());
	}

	Point getCenter() const
	{
		return center;
	}

	float getRadius() const  { return radius; }
	void setRadius(float _r)
	{ 
		if (_r >= 0)
			radius = _r;
		else
			radius = 1;
	}

	float area()
	{
		return PI * radius * radius;
	}

	float perimeter()
	{
		return 2 * PI * radius;
	}

	int onInOut(Point p) const
	{
		float d = center.distance(p);
		return d - radius;
	}
	

	friend ostream& operator<<(ostream& os, const Circle& p);
	
	friend istream& operator>>(istream& is, Circle& p);

};

//cout<< A;
ostream& operator<<(ostream& os, const Circle& c)
{
	os <<  c.center << c.radius << endl; //better
	//os << c.center.getX() << c.center.getY() << c.radius << endl; //ok
	
	//os << c.center.x << c.center.y << c.radius << endl; //comp error!!!

	return os;
}
//cin >> A
istream& operator>>(istream& is, Circle& c)
{
	is >> c.center >> c.radius;
	return is;
}

