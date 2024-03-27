#include <iostream>

using namespace std;
inline int abc()

{

    return 10;
}

int main()

{

    int n;

    n = abc();

    cout << " The inline function returned: " << n;

    return 0;
}