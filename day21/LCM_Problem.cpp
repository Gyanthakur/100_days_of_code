#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <math.h>
#include <set>
using namespace std;
#define int long long
long long t;
void solution()
{
    int l, r;
    cin >> l >> r;
    if (2 * l > r)
        cout << -1 << " " << -1;
    else
        cout << l << " " << 2 * l;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        solution();
        cout << endl;
    }
    return 0;
}