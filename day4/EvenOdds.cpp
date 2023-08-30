#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n, k;
    // cin >> n >> k;
    // vector<int>v;
    // for(int i=1;i<=n;i++)
    // {
    //     if(i%2!=0)
    //     v.push_back(i);
    // }
    // for(int i=1;i<=n;i++)
    // {
    //     if(i%2==0)
    //     v.push_back(i);
    // }
    // int ans =0;
    // for(int i=1;i<=v.size();i++)
    // {
    //     ans=v[k-1];
    // }
    // cout<<ans; //memory limit exceede

    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}