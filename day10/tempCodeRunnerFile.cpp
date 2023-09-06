#include <bits/stdc++.h>
using namespace std;
int main()
{
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
        int ans = 0;
        bool flag = 1;
        if (n == 1 && a[0] == 1)
            cout << 2 << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 0 && a[i + 1] == 0)
                {
                    flag = 0;
                    break;
                }
                else if (a[i] == 1 && a[i + 1] == 1)
                    ans += 5;
                else
                    ans += 1;
            }
        }
        if (flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}