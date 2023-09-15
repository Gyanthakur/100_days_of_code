#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <math.h>
#include <set>
using namespace std;
#define int long long
long long t;
bool prime(int n)
{
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 2)
        return true;
    else
        return false;
}
void solution()
{
    int n;
    cin >> n;
    if (n == 2)
        cout << 2 << endl;
    else
        cout << 3 << endl;
    for (int i = 1; i <= n; i++)
    {
        int m = n - i;
        if (prime(m) && !prime(m + n))
        {
            break;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}