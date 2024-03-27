// A destructor works opposite to constructor; it destructs the objects of classes. It can be defined only once in a class. Like constructors, it is invoked automatically.

// A destructor is defined like constructor. It must have same name as class. But it is prefixed with a tilde sign (~).

// It is not possible to define more than one destructor.
// Destructor neither requires any argument nor returns any value.

// C++ program to demonstrate the execution of constructor
// and destructor

#include <iostream>
using namespace std;

class Test
{
public:
    // User-Defined Constructor
    Test()
    {
        cout << "\n Constructor executed";
    }

    // User-Defined Destructor
    ~Test()
    {
        cout << "\nDestructor executed";
    }
};
main()
{
    Test t;

    return 0;
}

