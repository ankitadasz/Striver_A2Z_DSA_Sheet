#include<iostream>
using namespace std;
int main(){
    int n,ld,rev=0,num;
    cout<<"Enter the number you want to check for palindrome: ";
    cin>>n;
    num=n;
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(rev==num){
        cout<<"The given number "<<num<<" is a palindrome";
    }
    else{
        cout<<"The given number "<<num<<" is not a palindrome";

    }
}