#include <iostream>
using namespace std;
#include "Rational.h"

class  Rect
{

public:
    int length;
    int width;
    
    void printArea1() { cout << length * width; }
    void printArea2();
};

void Rect::printArea2()
{ cout << length * width; }

int main()
{
    Rect  rec1;

    rec1.length = 17;
    rec1.width = 19;
    rec1.printArea1();

    Rect* rec3;
    rec3 = new Rect;

    rec3->length = 17;
    rec3->width = 19;
    rec3->printArea1();


    Rational r1;
    r1.setMone(3);
    r1.setMechane(4);
    r1.print1();

    Rational r2;
    r2.setMone(2);
    r2.setMechane(3);

    if (r1.getMone() == r2.getMone())
        cout << "yes";

    r1.mult(r2);

    r2.mult(r1);




}
