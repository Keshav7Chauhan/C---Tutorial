// C++ program to demonstrate the use of default constructor


//  Default Constructors: Default constructor is the constructor which doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.


#include <iostream>
using namespace std;

// declare a class
class Wall
{
private:
    double length;

public:
    // default constructor to initialize variable
    Wall()
    {
        length = 5.5;
        cout << "Length" << length << endl;
    }
};

int main()
{
    Wall wall1;
    return 0;
}




