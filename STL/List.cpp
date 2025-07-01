#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
    ls.push_front(87);
    ls.emplace_front(98);
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;
}
//Rest function are same as vector