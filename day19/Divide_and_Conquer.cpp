#include <bits/stdc++.h>
using namespace std;
#define int long long
long long t, a[100005];

void solve()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        cout << 0;
        return;
    }
    sort(a, a + n);
    int i = 0;
    while (i < n)
    {
        if (a[i] % 2 == 1)
        {
            cout << floor(log2(a[i]));
            return;
        }
        i++;
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}