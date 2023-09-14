#include<bits/stdc++.h>
using namespace std;
#define int long long
long long  t, a[100005];
int fact(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int ans=0;
        for(int i=k-1;i>=1;i--)
        {
            if(fact(i)+fact(i-1)%k==0)
            ans=i;
        }
        cout<<k-1<<endl;
    }
return 0;
}