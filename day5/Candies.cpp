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
        for (int k = 2; k <= 1e8; k++)
        {
            int p = pow(2, k);
            p = p - 1;
            if (n % p == 0)
            {
                cout << n / p << endl;
                break;
            }
        }
    }

    return 0;
}