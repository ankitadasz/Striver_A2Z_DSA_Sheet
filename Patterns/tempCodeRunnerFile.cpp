#include<iostream>
using namespace std;
int main(){
    int i,j,n=3;
    for(i=0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            if(i==0||j==0||i==2*n-1||j==2*n-1){
                cout<<n;
            }
            else if(i==n-1&&j==n-1){
                cout<<"1";
            }
            else{
                cout<<n;
            }
        }
        cout<<endl;
    }
}