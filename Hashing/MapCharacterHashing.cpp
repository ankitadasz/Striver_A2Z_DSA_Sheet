#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENter the number of array elements:";
    cin>>n;
    char arr[n];
    cout<<"Enter the elements of the array:";
    map <char,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
   for(auto it : mpp) {
    cout << it.first << " -> " << it.second << endl;
}
    int q;
    cout<<"Enter how many letters you want to check:";
    cin>>q;
    cout<<"Enter the character you want to check for:";
    while(q--){
        char c;
        cin>>c;
        cout<<c<<" : "<<mpp[c]<<endl;
    }
}