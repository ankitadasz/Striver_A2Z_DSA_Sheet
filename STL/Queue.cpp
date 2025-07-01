//queue follow fifo
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>qu;
    qu.push(2);
    qu.push(5);
    qu.push(7);
    qu.emplace(8);
    qu.back()+=5;
    cout<<qu.back()<<endl;
    cout<<qu.front()<<endl;
    qu.pop();
    cout<<qu.front();
}