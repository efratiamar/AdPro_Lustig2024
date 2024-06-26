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
		center.setX(_x);
		center.setY(_y);
	}

	Circle(const Circle& c)
	{
		center = c.getCenter();
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




};
