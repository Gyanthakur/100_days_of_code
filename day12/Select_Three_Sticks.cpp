#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mini = INT_MAX;
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 2; i++)
        {
            int l = a[i];
            int m = a[i + 1];
            int n = a[i + 2];
            mini = min(mini, (n - m) + (m - l));
        }
        cout << mini << endl;
    }
    return 0;
}