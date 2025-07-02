#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1234,cnt=0;
    while(n!=0){
        n=n/10;
        cnt++;

    }
    cout<<cnt;
}