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
        vector<int> a(n);
        vector<int> b(n);

        int azero = 0, bzero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                azero++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 0)
                bzero++;
        }
        if (a == b)
        {

            cout << 0 << endl;
        }
        else if (azero == bzero)
        {
            cout << 1 << endl;
        }
        else
        {
            int c1 = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                    c1++;
            }
            int ans = c1;
            int x = abs(azero - bzero);
            ans = min(ans, 1 + x);
            cout << ans << endl;
        }
    }
    return 0;
}