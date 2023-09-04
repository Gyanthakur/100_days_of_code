#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    // vector<int>a(n);
    // vector<int>b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    // sort(a.begin(),a.end(),greater<int>());
    // sort(b.begin(),b.end(),greater<int>());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            count++;
        }
       
    }
    if (count==n)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}