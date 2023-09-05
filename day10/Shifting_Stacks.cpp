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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int indsum = 0;
        int sum = 0;
        bool flag = 1;
        for (int i = 0; i < n; i++)
        {
            indsum += i;
            sum += a[i];
            if (sum < indsum)
            {
                flag = 0;
                // break;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}