#include "Rect.h"
#include <iostream>
using namespace std;


//Rect::Rect() : length(0), width(0) { };

Rect::Rect(int l, int w)
	: length(l), width(w)
{ 
	if (length < 0)
		length = 8;
};

void Rect::printArea()
{
	cout << length * width << endl;
};