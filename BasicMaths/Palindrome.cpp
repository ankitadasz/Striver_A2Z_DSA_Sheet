#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=121,num=0,ld,pal=n;
    while(n!=0){
        ld=n%10;
        num=num*10+ld;
        n=n/10;
        
    }
    cout<<num<<endl;
    if(num==pal){
        cout<<"Its a palindrome";
    }
    else{
        cout<<"Its not a palindrome";
    }
}