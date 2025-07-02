#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=36,i;
    cout<<"divisors are:";
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}