#include<bits/stdc++.h>
using namespace std;
bool stringPalindrome(string s,int i=0){
    int n=s.length();
    if(i>=n/2)
    return true;
    if(s[i]!=s[n-i-1])
    return false;
    return stringPalindrome(s,i+1);
}
int main(){
   string s="ANKITA";
   cout<<(stringPalindrome(s) ? "Yes":"No");
}