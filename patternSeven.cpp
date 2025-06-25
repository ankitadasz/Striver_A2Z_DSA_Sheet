#include <iostream>
using namespace std;
int main()
{
    int i, j, space, n = 3;
    char ch;
    for (i = 0; i < n; i++)
    {
        for (space = 0; space < n - (i + 1); space++)
        {
            cout << " ";
        }
        for ( ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        if(i>0){
            for (char ch = 'A' + i - 1; ch >= 'A'; ch++)
        {
            cout << ch;
        }
        }
        
        cout << endl;
    }
}