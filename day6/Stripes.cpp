#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool fl = 0;
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            if (s == "RRRRRRRR")
            {
                fl = 1;
            }
        }
        if (fl)
            cout << "R" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}