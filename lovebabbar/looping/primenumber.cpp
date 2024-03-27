#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int i=2;
    while(i<n){
        if (n%i==0){
            cout<<"not prime";
        }
        i = i + 1;        
    } 
    return 0;
}