#include "Employee.h"

void sort(Person& p1, Person& p2)
{
    if (p1 < p2)
    {
        p1.print();
        p2.print();
    }
    else
    {
        p2.print();
        p1.print();
    }
}

int main()
{
    Person p1;
    p1.setFirstName("Sara");
    p1.setLastName("Cohen");
    p1.print();

    Employee e1; 
    e1.setFirstName("Rivka");
    e1.setLastName("Levi");
    e1.setSalary(3000);
    e1.addBonus(500);
    e1.print();
    e1.Person::print();
    e1.congratulate();

    //////////////////
    // Up casting& down casting

    Person p2("Sara", "Cohen");
    Employee e2("Rivka", "Levi", 3000);

    //up casting
    sort(p2, e2);

    //down casting
    Employee* ptr = (Employee*)&p2;
    ptr->print();
    p2.print();

}

