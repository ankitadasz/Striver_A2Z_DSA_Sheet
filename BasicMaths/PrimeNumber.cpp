#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5,i,cnt=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
        if(cnt>2){
            cout<<"its not a prime number";
        }
        else{
            cout<<"its a prime number";
        }
    }
