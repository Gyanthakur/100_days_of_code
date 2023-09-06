#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0; 
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (s[i + 1]=='0')
                    ans += 2;

                else if(s[i-1]=='0' && s[i]=='1' && s[i+1]=='0')
                    ans++;
            }
            // else
            // {
            //     if (s[i - 1] == '0' && s[i + 1] == '0')
            //         ans++;
            // }
        }
        cout << "ans : " << ans << endl;
    }
    return 0;
}