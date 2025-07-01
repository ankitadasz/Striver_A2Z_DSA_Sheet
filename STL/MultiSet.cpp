#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.erase(1);//All the one will be erased
    int cnt=ms.count(1);//It wwill count the no of 1 in set
    ms.erase(ms.find(1));
    ms.erase(ms.find(1),ms.find(1));
}