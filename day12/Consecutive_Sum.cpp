#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long k, n, s, t, x, a[100005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (cin >> t; t--;)
    {
        cin >> n >> k;

        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            a[i % k] = max(a[i % k], x);
        }
        s = 0;
        for (int i = 0; i < k; i++)
            s += a[i];
        cout << s << endl;
        fill(a, a + k, 0);
    }
    // cin >> t;
    // while (t--)
    // {
    //     cin >> n >> k;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }
    //     map<int, int> m;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (m.find(i % k) != m.end())
    //             m[i % k] = max(a[i % k], a[i]);
    //         else
    //             m[i % k] = a[i];
    //     }
    //     long long int ans = 0;
    //     for (auto it : m)
    //     {
    //         ans += it.second;
    //     }
    //     cout << ans << endl;
    // }
}