#pragma once
//Rational.h
#include <iostream>
using namespace std;

class Rational
{
    int mone;
    int mechane;
public:
    Rational(int myMone = 1, int myMechane = 1) :mone(myMone), mechane(myMechane) {}
    Rational(const Rational& num) :mone(num.getMone()), mechane(num.getMechane()) {}
    void setMone(int myMone) { mone = myMone; }
    void setMechane(int myMechane) { mechane = myMechane; }
    int getMone() const { return mone; }
    int getMechane() const { return mechane; }

    bool operator==(const Rational& num) const;
    bool operator!=(const Rational& num) const;
    Rational operator+(const Rational& num) const;
    Rational& operator+=(const Rational& num) ;
    Rational& operator=(const Rational& num);

    //cout << r1 << r2;
    friend ostream& operator<<(ostream& os, const Rational& num);

    //cin >> r1 >> r2; //2/3
    friend istream& operator>>(istream& is, Rational& num);
 
    void print() const { cout << mone << '/' << mechane << endl; }
};


