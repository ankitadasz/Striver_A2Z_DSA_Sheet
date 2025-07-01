#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(5);
    dq.emplace_back(6);
    dq.push_front(12);
    dq.emplace_front(56);
    dq.pop_back();
    dq.pop_front();

    dq.back();//show the last element
    dq.front();//it will show the 1st element
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<endl;

}
//rest of the functions are same as vector