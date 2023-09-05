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
        bool flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1] && s[i] != '?')
            {
                flag = 0;
            }
            else if (s[i] == '?')
            {
                if (s[i - 1] != 'a' && s[i + 1] != 'a')
                {
                    s[i] = 'a';
                }
                else if (s[i - 1] != 'b' && s[i + 1] != 'b')
                {
                    s[i] = 'b';
                }
                else
                {
                    s[i] = 'c';
                }
            }
        }
        if (flag)
            cout << s << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}