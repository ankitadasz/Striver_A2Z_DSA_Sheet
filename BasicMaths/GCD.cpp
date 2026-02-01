#include<bits/stdc++.h>
using namespace std;
int main(){
  int n1,n2,i;
  cout<<"Enter n1 and n2:";
  cin>>n1>>n2; 
     cout<<"GCD is:";
  for(i=1;i<=min(n1,n2);i++){//here we are taking minimum because the factor cant exceed the minimum number between two num

    if(n1%i==0&&n2%i==0){
        cout<<i<<" ";
    }
  }

}