#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            res = __gcd(res, abs(x - i));
        }
        cout << res << "\n";
    }
}