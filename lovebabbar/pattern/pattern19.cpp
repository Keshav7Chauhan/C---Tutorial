#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int star = n-col;
        while(star){
            cout<<"*";
            star=star+1;
        }
        col++;
    }
    
    return 0;
}