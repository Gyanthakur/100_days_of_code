#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int cnt = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 2)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // cout << n + 1 << endl;
        int m;
        if (n == 2)
            cout << 2 << endl;
        else
            cout << 3 << endl;

        for (int i = 2; i <= n; i++)
        {
            m = n - i;
            if (prime(m) && !prime(m + n))
            {
                // cout << "ans" << m << endl;
                break;
            }
        }
    }
    return 0;
}