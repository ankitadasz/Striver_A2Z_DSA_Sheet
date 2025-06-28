#include<iostream>
using namespace std;
int main(){
    int i,star,n=3;
    for(i=0;i<n;i++){
        for(star=0;star<=i;star++){
            cout<<"*";
        }
        cout<<endl;
    }
        for(i=n-1;i>0;i--){
            for(star=0;star<i;star++){
                cout<<"*";
            }
            cout<<endl;

        }
    }
