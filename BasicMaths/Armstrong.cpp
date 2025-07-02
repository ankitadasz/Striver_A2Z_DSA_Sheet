#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1543,ld,num=0,arm=n;
    while(n!=0){
        ld=n%10;
        num=num+ld*ld*ld;
        n=n/10;
    }
    cout<<num;
    if(arm==num){
        cout<<"Its a Armstrong number";
    }
    else{
        cout<<"Its not a Armstrong number";
    }

}