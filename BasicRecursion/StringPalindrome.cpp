#include<bits/stdc++.h>
using namespace std;
bool Palindrome(string n,int start,int end){
    if(start>=end){
        return true;
    }
    if(n[start]!=n[end]){
        return false;
    }
    return Palindrome(n,start+1,end-1);
    
}
    

int main(){
    string n;
    cout<<"Enter the string you want to check for palindrome: ";
    cin>>n;
    int start=0,end=n.length()-1;
    if(Palindrome(n,start,end)){
        cout<<"Its a palindrome";
    }
    else{
        cout<<"its not a palindrome";
    }

}