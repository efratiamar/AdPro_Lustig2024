#include "Vector.h"

void update1(Vector v)
{
    v.print();
    int i = rand() % v.getSize();
    int val = rand() % 100;
    v.setValue(i, val);
    v.print();
}

void update2(Vector& v)
{
    v.print();
    int i = rand() % v.getSize();
    int val = rand() % 100;
    v.setValue(i, val);
    v.print();
}

Vector randomVector()
{
    int size = rand() % 10 + 1;
    Vector v(size);
    v.print();

    //return move(v);
    return v;

}

int main()
{
    srand((unsigned)time(nullptr));

    cout << "Test 1:\n";
    Vector vec1;
    vec1.print();
    //update only the copy of the vector
    // and not the original vector
    update1(vec1);
    vec1.print();

    cout << "\nTest 2:\n";
    //update the original vector
    update2(vec1);
    vec1.print();

    cout << "\nTest 3:\n";
    Vector vec2 ( randomVector());
    vec2.print();

    return 0;
}