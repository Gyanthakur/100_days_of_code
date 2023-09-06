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

        int last = -1;
        int value = 1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (value == -1)
                continue;

            if (x == 1)
            {
                if (last == 1)
                {
                    value += 5;
                }
                else
                {
                    value += 1;
                }
            }
            else if (last == 0)
            {
                value = -1;
            }

            last = x;
        }

        cout << value << endl;
    }

return 0;
}