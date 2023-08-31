#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                cnt++;
        }
        if (cnt >= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}