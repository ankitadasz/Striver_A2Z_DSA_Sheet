#include<bits/stdc++.h>
using namespace std;
void PrintNum(int  i, int n){
    if(i>n)
    return;
    cout<<i<<endl;
    PrintNum(i+1,n);
}
int main(){
   int n=5;
   PrintNum(1,n);
}
