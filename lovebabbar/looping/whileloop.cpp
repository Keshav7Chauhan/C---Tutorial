#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value : ";
    cin>>n;
    int i = 1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i=i+1;
    // }

    // sum
    int sum = 0;
    while(i<=n){
        sum = sum+i;
        i = i+1;   
    }
    cout<<"value of sum is : "<<sum<<endl;
        return 0;
}

