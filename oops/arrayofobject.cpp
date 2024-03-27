// When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

// Syntax:
// ClassName ObjectName[number of objects];

// C++ program to implement
// the above approach
#include <iostream>
using namespace std;

class Employee
{
    int id;
    char name[30];

public:
    void getdata(); // Declaration of function
    void putdata(); // Declaration of function
};
void Employee::getdata()
{ // Defining of function
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
    
}
void Employee::putdata()
{ // Defining of function
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}
int main()
{
    Employee emp;  // One member
    emp.getdata(); // Accessing the function
    emp.putdata(); // Accessing the function
    return 0;
}
