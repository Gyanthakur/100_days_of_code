#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int minare = min(a, b);
        int maxare = max(a, b);
        long long ans = max(minare * 2, maxare);
        cout << ans * ans << endl;
    }

    return 0;
}