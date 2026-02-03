#include<bits/stdc++.h>
using namespace std;
int Factorial(int n){
    if(n==1)
    return 1;
    if(n==0){
        return 0;
    }

    return(n*Factorial(n-1));

}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<Factorial(n);
}