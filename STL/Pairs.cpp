#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {33, 4};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> a = {3, {4, 8}};
    cout << a.first << " " << a.second.first << " " << a.second.second<<endl;

    pair<int,int>arr[]={{1,2},{5,6},{7,8},{6,9}};
    cout<<arr[3].first<<" "<<arr[3].second;
}