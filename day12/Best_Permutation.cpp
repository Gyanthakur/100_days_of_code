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
        int n;
        cin >> n;
        if (n % 2)
        {
            a[0] = 1;
            a[1] = 2;
            a[2] = 3;
            int j=n-2;
            for (int i = 3; i<n-2; i++)
            {
                a[i] = j;
                j--;
            }
            a[n - 2] = n - 1;
            a[n-1] = n;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            int j=n-2;
            for (int i = 0; i<n-2; i++)
            {
                a[i] = j;
                j--;
            }
            a[n -2] = n - 1;
            a[n-1] = n;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}