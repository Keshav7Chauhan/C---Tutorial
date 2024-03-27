// The scope resolution operator is used to reference the global variable or member function that is out of scope.
// The operator is represented as the double colon (::) symbol.

// uses:-
// It is used to access the hidden variables or member functions of a program.
// t is used to access the static variable and static function of a class.

#include <iostream>
using namespace std;

int x; // Global x
int main()
{
    int x = 10; // Local x
    cout << "Value of global x is " << ::x;
    cout << "\nValue of local x is " << x;
    return 0;
}
