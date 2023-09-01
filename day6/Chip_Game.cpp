#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = -2, b = -10;
        int n, m;
        cin >> n >> m;

        if (a == b)
            cout << "Tonya" << endl;
        else if (a % 2 != 0 && b % 2 != 0)
        {
            // if (a > b)
            //     cout << "Tonya" << endl;
            // else
            //     cout << "Burenka" << endl;
        }
        else
        {
            // if (a > b)
            //     cout << "Tonya" << endl;
            // else
            //     cout << "Burenka" << endl;
        }
        int cnt = 0;
        cnt += n % 2;
        cnt += m % 2;
        if (cnt % 2)
            cout << "Burenka" << endl;
        else
            cout << "Tonya" << endl;
    }
    return 0;
}