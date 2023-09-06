#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int n = a.length();
        int m = b.length();
        int ax = 0;
        int bx = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'X')
                ax++;
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] == 'X')
                bx++;
        }
        // cout << ax << " " << a[n - 1] << endl;
        if (a == b)
            cout << "=" << endl;
        else if (a[n - 1] == 'S' && b[m - 1] == 'S')
        {
            if (ax > bx)
                cout << "<" << endl;
            else if (ax < bx)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
        else if (a[n - 1] == 'L' && b[m - 1] == 'L')
        {
            if (ax < bx)
                cout << "<" << endl;
            else if (ax > bx)
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
        else if (a[n - 1] == 'L' && b[m - 1] == 'M')
        {
            cout << ">" << endl;
        }
        else if (a[n - 1] == 'M' && b[m - 1] == 'L')
        {
            cout << "<" << endl;
        }
        else if (a[n - 1] == 'M' && b[m - 1] == 'S')
        {
            cout << ">" << endl;
        }
        else if (a[n - 1] == 'S' && b[m - 1] == 'M')
        {
            cout << "<" << endl;
        }
        else if (a[n - 1] == 'S' && b[m - 1] == 'L')
        {
            cout << "<" << endl;
        }
        else if (a[n - 1] == 'L' && b[m - 1] == 'S')
        {
            cout << ">" << endl;
        }
    }
    return 0;
}