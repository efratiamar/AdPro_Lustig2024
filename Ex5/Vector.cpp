#include "Vector.h"

ostream& operator<<(ostream& os, const Vector& v)
{
    for (int i = 0; i < v.size; i++)
        os << v.numbers[i] << ' ';
    os << endl;

    return os;
}

//Vector v;
//cout << v[6];
//v[5] = 88;
int& Vector::operator[] (int index)
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

Vector::Vector(int _cap)
{
    cout << "in ctor\n"; 
    capacity = _cap;
    numbers = new int[capacity];
    size = 0;
}

Vector::Vector(const Vector& v)
{
    cout << "in copy ctor\n";
    capacity = v.capacity;
    size = v.size;

    numbers = new int[capacity];
    for (int i = 0; i < size; i++)
        numbers[i] = v.numbers[i];
}

Vector::Vector(Vector&& v)
{
    cout << "in move ctor\n";
    capacity = v.capacity;
    size = v.size;
    numbers = v.numbers;
    v.numbers = nullptr;
}

Vector::~Vector()
{
    cout << "in dtor\n";
    if (numbers)
        delete [] numbers;
    numbers = nullptr;
}

int Vector::getSize()
{
    return size;
}

bool Vector::isEmpty() const
{
    return size == 0;
}

void Vector::addLast(int k)
{
    if (size < capacity)
    {
        numbers[size++] = k;
    }
    else
        cout << "Vector is full";
}
int Vector::lastValue() const
{
    if (!isEmpty())
        return numbers[size - 1];
    //else
    //    throw "Vector is empty";
}

int Vector::removeLast()
{
    if (!isEmpty())
    {
        //1 2 3 4
        size--;
        return numbers[size];
    }
    //else
    //    throw "Vector is empty";
}

void Vector::clear()
{
    size = 0;
}

int Vector::at(int i) const
{
    if (i >=0 && i<size)
        return numbers[i];
    //else
    //    throw "Index is out of range";
}



void Vector::sort()
{
    int i, j;
    for (i = 1; i < size; i++)
    {
        int tmp = numbers[i];
        for (j = i; j > 0 && tmp < numbers[j - 1]; j--)
            numbers[j] = numbers[j - 1];
        numbers[j] = tmp;
    }
}

void Vector::print() const
{
    for (int i = 0; i < size; i++)
        cout << numbers[i] << ' ';
    cout << endl;
}
