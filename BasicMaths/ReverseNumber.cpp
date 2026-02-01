#include<iostream>
using namespace std;
int main(){
    int n,ld,rev=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    cout<<"The reverse of the given number is: "<<rev;
}