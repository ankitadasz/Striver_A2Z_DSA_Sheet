#include <iostream>
using namespace std;
int main()
{
    int i, num, n = 4, val;
    for (i = 1; i <= n; i++)
    {
        val = (i % 2 != 0) ? 1 : 0;
        for (num = 1; num <= i; num++)
        {
            cout << val;
            val = 1 - val;
        }
        cout << endl;
    }
}