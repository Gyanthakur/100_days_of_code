#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m, k;
        cin >> n >> m >> k;
        string a, b;
        string c = "";
        cin >> a >> b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int p = 0, q = 0;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if ((a[i] < b[j] && p < k) || q == k)
            {
                c += a[i];
                p++;
                i++;
                q = 0;
            }
            else
            {
                c += b[j];
                q++;
                j++;
                p = 0;
            }
        }
        cout << c << endl;
    }

    return 0;
}