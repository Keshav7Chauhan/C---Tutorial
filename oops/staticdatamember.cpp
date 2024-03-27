// defination:-Static data members are class members that are declared using static keywords.
// It is visible only within the class, but its lifetime is the entire program.
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A's Constructor Called " << endl;
    }
};

class B
{
    static A a;

public:
    B()
    {
        cout << "B's Constructor Called " << endl;
    }
};

// Driver code
int main()
{
    B b;
    return 0;
}
