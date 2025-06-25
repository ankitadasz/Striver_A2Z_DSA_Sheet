     #include<iostream>
     using namespace std;
     int main(){
     int i,j,n=3;
     char val;
     for(i=0;i<n;i++){
         val='A'+i;
         for(j=0;j<=i;j++){
             cout<<val<<" ";
         }
         cout<<endl;
     }
     }


