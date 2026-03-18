#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of array element:";
    cin>>n;
     int arr[n];
     cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cout<<"Enter how many numbers you want to search:";
    cin>>q;
    cout<<"Enter the numbers you want to search:";
    while(q--){
        int num;
        cin>>num;
        cout<<num<<" : "<<mpp[num]<<endl;
    }
}