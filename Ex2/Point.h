#pragma once

class Point
{
	float x;
	float y;

public:
	Point() : x(0), y(0) {};
	Point(float _x, float _y) : x(_x), y(_y) {};

	float getX() const;
	void setX(float _x) { x = _x; };

	float getY() const  { return y; };
	void setY(float _y) { y = _y; };

	float distance(const Point& p) const;

};