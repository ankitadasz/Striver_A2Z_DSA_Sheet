#include<iostream>
using namespace std;
int main(){
    int i,j,n=4,space;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(space=1;space<=2*n-2*i;space++){
            cout<<" ";
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}