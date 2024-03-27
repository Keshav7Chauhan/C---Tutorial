#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of 'a' : ";
    cin>>a;
    cout<<"Enter the value of 'b' : ";
    cin>>b;

    // a=cin.get();  use only for tab click 
    // b=cin.get();  use only for tab click

    if(a<b){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false";
    }
    return 0;
}