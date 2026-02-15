#include <bits/stdc++.h>
using namespace std;
int Fibonacchi(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return  Fibonacchi(n - 1)+Fibonacchi(n - 2);
}
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "Fibonacchi series is:";
    for(int i=0;i<n;i++){
        cout<<Fibonacchi(i);
    }
    
    
}