// Parameters should have a different type
// add(int a, int b)
// add(double a, double b)

#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "sum = " << (a + b);
}

int add(double a, double b)
{
    cout << endl
         << "sum = " << (a + b);
}

// Driver code
int main()
{
    add(10, 2);
    add(5.3, 6.2);

    return 0;
}

// Parameters should have a different number
// add(int a, int b)
// add(int a, int b, int c)

#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "sum = " << (a + b);
}

int add(int a, int b, int c)
{
    cout << endl
         << "sum = " << (a + b + c);
}

// Driver code
int main()
{
    add(10, 2);
    add(5, 6, 4);

    return 0;
}

// Parameters should have a different sequence of parameters.
// add(int a, double b)
// add(double a, int b)

#include <iostream>
using namespace std;

void add(int a, double b)
{
    cout << "sum = " << (a + b);
}

void add(double a, int b)
{
    cout << endl
         << "sum = " << (a + b);
}

// Driver code
int main()
{
    add(10, 2.5);
    add(5.5, 6);

    return 0;
}
