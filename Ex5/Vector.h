#pragma once
#include <iostream>
using namespace std;

class Vector
{
private:
    int* numbers;
    int capacity;    //max numbers
    int size;       //actually numbers

public:
    Vector(int _cap = 10); //default constructor
        
    Vector(const Vector& v); //copy constructor

    Vector(Vector&& v); //move constructor

    ~Vector(); //destructor

    int getSize();
    bool isEmpty() const;
    void addLast(int k);
    int lastValue() const;
    int removeLast();
    void clear();
    int at(int i) const;
    void sort();


    //void setValue(int pos, int val);
    void print() const;

    //Vector v;
    //cout << v[6];
    //v[5] = 88;
    int& operator[] (int index)
    {
        if (index < size)
            return numbers[index];
        else if (index < capacity)
        {
            size++;
            return numbers[index];
        }
        else
            cout << "ERROR\n";
    }

    friend ostream& operator<<(ostream& os, const Vector& p);


};