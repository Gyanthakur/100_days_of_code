#include <iostream>

using namespace std;

int main()
{
    long t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // if (k % 4 == 0)
        // {
        //     cout << "NO" << endl;
        //     continue;
        // }
        // cout << "YES" << endl;
        // for (long p = 1; p <= n; p += 2)
        // {
        //     long a = p, b = p + 1;
        //     long tst = ((p + k) * (p + 1)) % 4;
        //     if (tst)
        //     {
        //         cout << b << " " << a << endl;
        //     }
        //     else
        //     {
        //         cout << a << " " << b << endl;
        //     }
        // }

        if (k % 2)
        {
            cout << "YES" << endl;
            for (int i = 1; i < n; i += 2)
            {
                cout << i << " " << i + 1 << endl;
            }
        }
        else
        {
            if (k % 4 == 0)
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                int flag = 0;
                for (int i = 1; i < n; i+=2)
                {
                    if (flag)
                        cout << i << " " << i + 1 << endl;
                    else
                        cout << i + 1 << " " << i << endl;
                    flag = 1 - flag;
                }
            }
        }
    }

    return 0;
}
