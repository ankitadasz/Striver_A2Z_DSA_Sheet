#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int a[] , int n, int i=0){
   if(i>=n/2)
   return;
   swap(a[i],a[n-i-1]);
   ReverseArray(a,n,i+1);
}
int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    ReverseArray(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}