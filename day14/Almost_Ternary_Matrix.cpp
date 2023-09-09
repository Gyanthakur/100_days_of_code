#include <bits/stdc++.h>
using namespace std;
#define int long long
long long t, a[100005];
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1;
        for (int i = 1; i <= 50; i++)
        {
            if (i & 1)
                s1 += "11";
            else
                s1 += "00";
        }
        string dummy1, dummy2;
        dummy1 = s1.substr(3, m);
        dummy2 = s1.substr(1, m);
        for (int i = 0; i < n / 2; i++)
        {
            if (i & 1)
            {
                for (auto it : dummy2)
                    cout << it << " ";
                cout << endl;
                for (auto it : dummy1)
                    cout << it << " ";
                cout << endl;
            }
            else
            {
                for (auto it : dummy1)
                    cout << it << " ";
                cout << endl;
                for (auto it : dummy2)
                    cout << it << " ";
                cout << endl;
            }
        }
    }

    return 0;
}