#include <iostream>
using namespace std;
int main()
{
    int n, ld, count = 0;
    cout << "Enter the value of n:";
    cin >> n;
    while (n > 0)
    {
        ld = n % 10;
        count++;
        n = n / 10;
    }
    cout << "no of digits in the number:" << count;
}