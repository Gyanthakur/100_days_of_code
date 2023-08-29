#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        char a = s[0];
        char b = s[n - 1];
        if(n>10)
        cout << a << n - 2 << b << endl;
        else
        cout<<s<<endl;
    }
    return 0;
}