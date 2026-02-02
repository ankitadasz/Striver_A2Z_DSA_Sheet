#include<iostream>
using namespace std;
void printNum(int i,int n){
    if(i>n)
    return;
    cout<<i<<" ";
    printNum(i+1,n);

}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    printNum(1,n);

}