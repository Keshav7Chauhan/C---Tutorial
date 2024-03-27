// Program to illustrate the working of
// objects and class in C++ Programming

// public: members can be accessed outside the class.
// private: members cannot be accessed outside the class.
// protected: members cannot be accessed(viewed) from outside the class, but can be accessed in inherited classes(sub classes).

#include <iostream>
using namespace std;

// create a class
class Room
{

public:
    int length;
    int breadth;

    int Area()
    {
        return length * breadth;
    }
};

int main()
{

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 7;
    room1.breadth = 7;

    // calculate and display the area of the room
    cout << "Area is:" << room1.Area() << endl;

    return 0;
}

// class room
// {
// public:
//     int length;
//     int bredth;

//     int area()
//     {
//         return length * bredth;
//     }
// };

// int main()
// {
//     room room1;
//     room1.length = 7;
//     room1.bredth = 7;
//     cout << "area" << room1.area();
//     return 0;
// }