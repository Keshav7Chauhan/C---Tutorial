/*
output:-
A A A A
B B B B
C C C C
D D D D
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            col = col + 1;

            char ch = 'A' + row - 1;
            cout << ch << " ";
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}

/*
output:-
A B C
A B C
A B C
*/

// #include <iostream>
// using namespace std;

// int main() {
//     int row = 1;
//     while (row <= 3) {
//         int col = 1;
//         while (col <= 3) {
//             cout << char(64 + col) << " ";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }