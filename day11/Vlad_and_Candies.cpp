#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        string ans = "Yes";
        if (a[n - 1] - a[n - 2] > 1)
            ans = "No";
        if (n == 1 && a[0] > 1)
            ans = "NO";
        cout << ans << endl;
    }
}