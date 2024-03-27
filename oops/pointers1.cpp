#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;

    // &= (address of) operator
    cout<<b<<endl;
    cout<<&a<<endl;

    // *=(value at) dereference operator
    cout<<" The value at address b is "<<*b<<endl;

    return 0;
}

// int main(){
//     int a=3;
//     int* b=&a;
//     cout<<b<<endl;
//     cout<<&a<<endl;
//     cout<<"the value of b"<<*b<<endl;
//     return 0;
// }