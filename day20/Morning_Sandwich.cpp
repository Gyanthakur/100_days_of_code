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
    int b,c,h;
    cin>>b>>c>>h;
    int x = c+h;
    if(x>= b-1)
        cout<<2*b-1<<endl;
    else if(x<b)
        cout<<2*x+1<<endl;
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