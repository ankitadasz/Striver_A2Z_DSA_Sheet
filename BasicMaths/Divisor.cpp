#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"divisors are:";
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    
}