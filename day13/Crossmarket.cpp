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

        if (n == 1 && m == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n < m)
            {
                cout << 2 * (n - 1) + m << endl;
            }
            else
            {
                cout << 2 * (m - 1) + n << endl;
            }
        }
    }
    return 0;
}