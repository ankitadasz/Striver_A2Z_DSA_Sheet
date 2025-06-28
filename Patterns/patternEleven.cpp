#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=3;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(k=1;k<=2*n-2*i;k++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(k=1;k<=2*i;k++){
            cout<<" ";
        }
        for(j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}