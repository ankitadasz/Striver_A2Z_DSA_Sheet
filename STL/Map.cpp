// it stores the key and value like{key,value}
// map store unique keys in sorted order
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mpp;
    // map<int, pair<int, int>> mpp;
    // map<pair<int, int>, int> mpp;
    mpp[1] = 2;
    mpp.insert({3, 1}); // here the key is 3 and value is 1
    // mpp.emplace({2, 4});
    // mpp({2, 3}) = 10; //{key={2.3},val=10}
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << mpp[1]; // it will give the value you have stored in 1key
    cout << mpp[7]; // here we dont have 7key so either it will print 0 or null
    
    auto it=mpp.find(3);//here it will find the adress of 3
    cout<<it->second<<endl;

    auto it=mpp.find(5);//As there are no 5 it will points to after the map mpp.end()
    
    auto it=mpp.lower_bound(2);
    auto it=mpp.upper_bound(3);
}
