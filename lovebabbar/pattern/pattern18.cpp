/*
output:-
      *
    * * 
  * * *
* * * *  
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n)
//     {
//         int space = n-row;
//         int col = 1;
//         while (space)
//         {
//             cout<<" ";
//             space = space-1;
            
//         }
//         while(col<=row){
//             cout<<"*";
//             col=col+1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = row-1;
        int col = 1;
        while (space)
        {
            cout<<" ";
            space = space+1;
            
        }
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout << endl;
        row = row - 1;
    }
    return 0;
}