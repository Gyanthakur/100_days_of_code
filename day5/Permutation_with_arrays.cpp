#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            cout << "no";
            return 0;
        }
        else
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if (a[i] == b[i])
            {
                cout << "yes";
                return 0;
            }
        }

        return 0;
    }
}