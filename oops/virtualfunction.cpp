// defination:-A virtual function is a member function that you expect to be redefined in derived classes.

// Rules of Virtual Function :-

// Virtual functions must be members of some class.
// Virtual functions cannot be static members.
// They are accessed through object pointers.
// They can be a friend of another class.
// A virtual function must be defined in the base class, even though it is not used.

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Derived derived1;

    // pointer of Base type that points to derived1
    Base *base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    return 0;
}