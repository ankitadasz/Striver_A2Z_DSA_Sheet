#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ld,arm=0,num,temp,count=0;
    cout<<"Enter the no you want to check for Armstrong:";
    cin>>n;
    num=n;
    temp=n;
    while(n>0){
        count++;
        n=n/10;
        
    }
    while(temp>0){
        ld=temp%10;
        arm=arm+pow(ld,count);
        temp=temp/10;
    }
    if(num==arm){
        cout<<num<<" is an armstrong number";
    }
    else{
        cout<<num<<" is not an armstrong number";

    }
}