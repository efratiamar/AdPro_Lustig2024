#include "Point.h"
#include <cmath>


float Point::getX() const
{ 
	return x;
};

float Point::distance(const Point& p) const
{
	float xp = p.getX();;
	return sqrt( pow(x - xp, 2) + pow(y - p.getY(), 2));
}