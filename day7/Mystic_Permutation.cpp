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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] == a[i])
            {
                swap(b[i], b[i + 1]);
            }
        }
        if (b[n - 1] == a[n - 1])
            swap(b[n - 2], b[n - 1]);
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}