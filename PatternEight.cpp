#include<iostream>
using namespace std;
int main(){
    int space,i,j,n=4;
    for(i=0;i<n;i++){
        for(space=0;space<=n-(i+1);space++){
            cout<<" ";
        }
        char ch='A';
        int midpt=(2*i+1)/2;
        for(j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=midpt){
                ch++;
            }
            else{
                ch--;
            }
            
        }
        for(space=1;space<=n-(i+1);space++){
            cout<<" ";
        }
        cout<<endl;

    }
}