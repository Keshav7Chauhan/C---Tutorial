#include <iostream>
using namespace std;
inline int cube(int n)
{
    return (n * n * n);
}
int main()
{
    cout << "The cube of 3 is: " << cube(3);
    return 0;
}