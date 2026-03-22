#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of array element:";
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    cout << "Enter the array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
 
  
       int maxi=0;
       vector <int> ans;
    for(auto it : mpp){
        if(it.second>maxi){
            maxi=it.second;
            ans.clear();
            ans.push_back(it.first);
        }
        else if(it.second==maxi){
            maxi=it.second;
            ans.push_back(it.first);
        }
    }
    cout<<"The element having more frequency:";
    for(auto x : ans ){
        cout<<x<<" ";
    }
}