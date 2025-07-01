#include<bits/stdc++.h>
using namespace std;
int main(){
    //it will strore the element in sorted order and unique element
    set<int>se;
    se.insert(8);
    se.insert(7);
    se.emplace(4);
    se.insert(6);
    se.insert(6);
    
    auto it=se.find(4);//itr will give the place where 4 is present
    auto it=se.find(85);//itr will give the after end value ie se.end()
    se.erase(8);//it will erase 8 and maintain the sorted order
    int cnt=se.count(1);//if 1 will be present then it will return 1 else 0
    auto it=se.find(4);
    se.erase(it);
    ///{1,2,3,4,5,6}
    auto it1=se.find(2);
    auto it2=se.find(4);
    se.erase(it1,it2);//after erase {1,4,5,6} will be there {first,end}

///Time complexity is log(n)
//SET MEANS UNIQUE AND SORTED
     
}