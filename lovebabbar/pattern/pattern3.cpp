/*
output:-
====123====
====123====
====123====
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
    
    return 0;
}
