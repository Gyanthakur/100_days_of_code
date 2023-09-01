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
        if (n == 3)
            cout << -1 << endl;
        else
        {
            if (n % 2)
            {
                int k = n / 2 + 1;
                for (int i = n; i > k; i--)
                {
                    cout << i << " ";
                }
                for (int i = 1; i <= k; i++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else
            {
                for (int i = n; i >= 1; i--)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}