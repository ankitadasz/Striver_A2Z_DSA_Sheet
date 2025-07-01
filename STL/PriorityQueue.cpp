//in priority queue the largest element will stay at the top
#include<bits/stdc++.h>
using namespace std;
int main(){

    //priority queue tha stores largest element at the top
    //It is known as max heap
      priority_queue<int>pq;
      pq.push(6);
      pq.push(7);
      pq.emplace(8);
      pq.push(15);
      cout<<pq.top()<<endl;
      pq.pop();
      cout<<pq.top()<<endl;

      //priority queue that store the smallest element at the top
      //it is known as min heap
      priority_queue<int,vector<int>,greater<int>>prq;
      prq.push(5);
      prq.push(2);
      prq.push(18);
      prq.push(6);
      cout<<prq.top()<<endl;
}
//Time complexity
//push,pop=log(n).;
//top=bigO(1)