#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 12; i++)
    {
        int ans = n * i;
        cout << n << " * " << i <<" = " << ans << endl;
    }
    return 0;
}