#include <iostream>
using namespace std;
void revArray(int n, int a[])
{
    int i;
    if (n == 0)
        return;
    cout << a[n - 1] << " ";
    revArray(n - 1, a);
}
int main()
{
    int i, n;
    cout << "Enter the value of n:";
    cin >> n;
    int a[n];

    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The reversed array is:";
    revArray(n, a);
}
