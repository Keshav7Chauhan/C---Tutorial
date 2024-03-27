// sum of no.

#include <iostream>
using namespace std;
int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result = sum(10);
    cout << result;
    return 0;
}

// explain
// When the sum() function is called, it adds parameter n to the sum of all numbers smaller than n and returns the result. When n becomes 0, the function just returns 0. When running, the program follows these steps:

// 10 + sum(9)
// 10 + ( 9 + sum(8) )
// 10 + ( 9 + ( 8 + sum(7) ) )
// ...
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
