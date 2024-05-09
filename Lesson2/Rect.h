#pragma once

class  Rect
{
    int length = 5;
    int width = 7;

public:

    //Rect();
    Rect(int l=0, int w=0);


    void setL(int _l) { length = _l; }
    

    void printArea();
    int operation(int operand = 66, int ddd= 78) { return length * 2 + operand; };

};

