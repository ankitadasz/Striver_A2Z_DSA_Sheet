//stack follows lifo rule
//stack has only some functions like push pop top size swap empty
#include<bits/stdc++.h>
using namespace std;
int main(){
   stack<int>st;
   st.push(3);
   st.emplace(5);
   st.push(6);
   st.push(7);
   st.push(10);
   cout<<st.top()<<endl;;
   st.pop();
   cout<<st.top()<<endl;;
   cout<<st.size()<<endl;
   cout<<st.empty();
   stack<int>s1,s2;
   s1.swap(s2);
}
//all the OPERATIONS  are bigO(n)