#include<iostream>
using namespace std;
int main(){
    int i,j,n=5,val=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<val;
            val=val+1;
        }
        cout<<endl;
    }
    return 0;
}