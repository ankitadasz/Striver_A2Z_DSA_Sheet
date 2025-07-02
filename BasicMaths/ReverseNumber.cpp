#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1234,num=0,ld;
    while(n!=0){
        ld=n%10;
        num=num*10+ld;
        n=n/10;
        
    }
    cout<<num;
}