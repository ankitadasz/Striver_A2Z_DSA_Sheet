#include<iostream>
using namespace std;
int main(){
     int i,star,space,n=4;
   for(i=0;i<n;i++){
      for(space=0;space<n-i-1;space++){
        cout<<" ";
      }
      for(star=0;star<2*i+1;star++){
        cout<<"*";
      }
      for(space=0;space<n-i-1;space++){
        cout<<" ";
      }
      cout<<endl;

        }    for(i=0;i<n;i++){
        for(space=0;space<i;space++){
            cout<<" ";
        }
        for(star=0;star<2*n-(2*i+1);star++){
            cout<<"*";
        }
        for(space=0;space<=i;space++){
            cout<<" ";
        }
        cout<<endl;

      }
   }
    