#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << " using function with 2 arguments " << endl;
    return (a + b);
}

// volume of cube
int volume(int a)
{
    return (a * a * a);
}

int main()
{
    cout << "the sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "the volume of side 3 is " << volume(3) << endl;
    return 0;
}