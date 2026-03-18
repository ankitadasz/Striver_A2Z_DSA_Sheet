//for all the character
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout<<"Enter the string:";
//     cin >> s;
//     int hash[256]= {0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }
//     int q;
//     cout<<"Enter how many letter you want to check:";
//     cin>>q;
//      cout<<"Enter the character you want to check for:";
//     while(q--){
//         char c;
//         cin>>c;
//         cout<<c<<" : "<< hash[c]<<endl;
//     }
// }



///for the lower case
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:";
    cin >> s;
    int hash[26]= {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter how many letter you want to check:";
    cin>>q;
     cout<<"Enter the character you want to check for:";
    while(q--){
        char c;
        cin>>c;
        cout<<c<<" : "<< hash[c-'a']<<endl;
    }
}