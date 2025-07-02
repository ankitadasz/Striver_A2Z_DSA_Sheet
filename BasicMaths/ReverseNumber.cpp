#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1234,num=0;
    while(n!=0){
        num=n%10;
        n=n/10;
        cout<<num;
    }
    
}