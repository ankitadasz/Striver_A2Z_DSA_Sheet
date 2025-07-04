#include<bits/stdc++.h>
using namespace std;
int sum=0;
void Sum(int n){
    if(n==0)
    return;
    sum=n+sum;
    Sum(n-1);

}

int main(){
    int n=5;
    Sum(n);
    cout<<sum;
}