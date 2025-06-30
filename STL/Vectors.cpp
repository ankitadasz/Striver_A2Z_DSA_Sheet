#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;                        // it will create a empty vector
    v.push_back(1);                       // it will store 1 in that empty vector
    v.emplace_back(2);                    // it will store 2 in that empty vector
    vector<int>::iterator it = v.begin(); //
    cout << *it << endl;
    it++;
    cout << *it << endl;

    vector<pair<int, int>> vec; // it will create a pair of vector
    vec.push_back({1, 2});      // you have to use curly braces to declare it as pair
    vec.emplace_back(1, 2);     // it willautomatically take the value as pair

    vector<int> ve(5, 100); // it will create 5 instances and store 100 in that
    vector<int> vect(5);    // it will make 5 places in an array and will store garbage element
    vector<int> v1(5, 20);  // it will create 5 instances and staore 20 in that
    vector<int> v2(v1);     // to copy v1 into v2 you have to use this method


///////////AUTO//////////
    vector<int> V(5, 100);
    for (vector<int>::iterator it = V.begin(); it != V.end(); it++)
    {
         cout << *(it) << " ";
    }
    // instead of it you can also write auto and auto will automatically identify the data type
    cout << endl;
    for (auto it = V.begin(); it != V.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // instead of it you can write
    for (auto it : V)
    {
        cout << it << " ";
    }
    cout<<endl;


///////ERASE//////
vector<int>ar={1,2,3,4,5,6};
for(auto it:ar){
    cout<<it<<" ";
}
cout<<endl;
 ar.erase(ar.begin()+1,ar.begin()+3);
 for(auto it:ar){
    cout<<it<<" ";
 }


// cout<<endl;
// ar.erase(ar.begin()+1);
// for(auto it:ar){
//     cout<<it<<" ";
// }
// cout<<endl;

// cout<<endl;
// ar.erase(ar.begin()+2);
// for(auto it:ar){
//     cout<<it<<" ";
// cout<<endl;
// }










































}