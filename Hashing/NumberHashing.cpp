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
    int q;
    cout << "Enter how many numbers you want to search:";
    cin >> q;
    cout << "Enter the numbers you want to search:";
    while (q--)
    {
        int num;
        cin >> num;
        cout << num << " : " << mpp[num] << endl;
    }
}