#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter  the number of elements you want to add: ";
    cin>>n;
    int i;
    int sum=0;
    for(i=1; i<=n; i++){
    if(i%2==0) {
            
    sum = sum +i;
            
    }
    }
    cout<<"sum of even number"<< sum ;
    
    return 0;
}

