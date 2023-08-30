#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s1, s2;
    // cin >> s1 >> s2;
    // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    // int n = s1.length();
    // int x = 0, y = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     x += s1[i];
    //     y += s2[i];
    // }
    // if (x == y)
    //     cout << 0 << endl;
    // else if (x > y)
    //     cout << 1 << endl;
    // else
    //     cout << "-1" << endl;

    long long i;
    string f, s;
    while (cin >> f >> s)
    {
        long sum1 = 0, sum2 = 0;
        for (i = 0; i < f.size(); i++)
        {
            if (f[i] >= 'A' && f[i] <= 'Z')
                f[i] = f[i] - 'A' + 97;

            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] - 'A' + 97;
        }
        for (i = 0; i < s.size(); i++)
        {
            if (f[i] > s[i])
            {
                cout << "1\n";
                return 0;
            }

            if (s[i] > f[i])
            {
                cout << "-1\n";
                return 0;
            }
        }
        cout << "0\n";
    }
    return 0;
}