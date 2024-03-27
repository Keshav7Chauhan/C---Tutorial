// C++ program to demonstrate the working of friend function

// syntex
// class class_name
// {
//     friend data_type function_name(argument/s);            // syntax of friend function.
// };

// defination:-A friend function can access the private and protected data of a class. We declare a friend function using the friend keyword inside the body of the class.

#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;

    // friend function
    friend int add(Distance);

public:
    Distance() : meter(0) {}
};

// friend function definition
int add(Distance d)
{

    // accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

int main()
{
    Distance D;
    cout << "Distance: " << add(D);
    return 0;
}