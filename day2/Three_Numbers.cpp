#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,s;
    cin>>k>>s;
    int x=0,y=0;
    int ans =0;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(s-i-j<=k && s-i-j>=0)
            ans++;
            
        }
    }
    cout<<ans;
return 0;
}