#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long s1, e;
        cin >> s1 >> e;
        long long ss = min(s1,e);
        long long ee = max(s1,e);
        ss = ss - 1;
        long long endsum = ee * (ee + 1) / 2;
        long long ssum = ss * (ss + 1) / 2;
        long long ans = endsum - ssum;

        cout << ans << endl;
    }
    return 0;
}