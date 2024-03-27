// C++ program to demonstrate the
// break statement
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    for (int i = 1; i < 10; i++)
    {

        // Breaking Condition
        if (i == 5)
            break;
        cout << i << " ";
    }
    return 0;
}

// C++ program to demonstrate the
// continue statement
#include <iostream>
using namespace std;

// Driver code
int main()
{
    for (int i = 1; i < 10; i++)
    {

        if (i == 5)
            continue;
        cout << i << " ";
    }
    return 0;
}

// C++ program to demonstrate the
// return statement
#include <iostream>
using namespace std;

// Driver code
int main()
{

    for (int i = 0; i < 10; i++)
    {

        // Termination condition
        if (i == 5)
            return 0;
        cout << i << " ";
    }

    return 0;
}

// C++ program to demonstrate the
// goto statement
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    int n = 4;

    if (n % 2 == 0)
        goto label1;
    else
        goto label2;

label1:
    cout << "Even" << endl;
    return 0;

label2:
    cout << "Odd" << endl;
}
