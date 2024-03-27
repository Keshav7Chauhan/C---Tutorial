// defination:- A class can be derived from more than one base class.

// Eg:
// (i) A CHILD class is derived from FATHER and MOTHER class
// (ii) A PETROL class is derived from LIQUID and FUEL class.

// Syntax:

// class A
// {
// ... .. ...
// };
// class B
// {
// ... .. ...
// };
// class C: public A,public B
// {
// ... ... ...
// };

#include <iostream>
using namespace std;

class A
{
public:
	A() { cout << "A's constructor called" << endl; }
};

class B
{
public:
	B() { cout << "B's constructor called" << endl; }
};

class C : public B, public A // Note the order
{
public:
	C() { cout << "C's constructor called" << endl; }
};

int main()
{
	C c;
	return 0;
}
