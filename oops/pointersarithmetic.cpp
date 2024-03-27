#include <iostream>
using namespace std;
int main()
{
    int marks[] = {38, 39, 54, 78};
    int MathMarks[4];

    // pointers and array
    int *p = marks;

    cout << *p;
    ++p;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;

    // cout<<*(p+1);
    // cout << " value of *p: " << *(p) << endl;
    // cout << " value of *(p + 1): " << *(p + 1) << endl;
    // cout << " value of *(p + 2): " << *(p + 2) << endl;
    // cout << " value of *(p + 3): " << *(p + 3) << endl;

    return 0;
}
