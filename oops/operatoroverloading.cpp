

// defination:- C++ provides a special function to change the current functionality of some operators within its class which is often called as operator overloading. Operator Overloading is the method by which we can change the function of some specific operators to do some different tasks.

// Syntax:

// Return_Type classname :: operator op(Argument list)
// {
//    Function Body
// }// This can be done by declaring the function

#include <iostream>
using namespace std;

class Count
{

    int value;

public:
    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator++()
    {
        ++value;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}

