#include <bits/stdc++.h>     
using namespace std;
#define ll long long
void solve(){
    ll n; cin>>n;
    ll sum=0,ans=21;
    vector<ll> a(n);
    for(auto &it:a){
        cin>>it;
        sum+=it;
    }
    if(sum&1){
        for(auto &it:a){
            ll cur=it,now=0;
            while(!((cur+it)&1)){
                now++;
                cur/=2;
            }
            ans=min(ans,now);
        }
    }
    else{
        ans=0;
    }
    cout<<ans<<"\n";
}
int main()                                                                                
{  
    ios_base::sync_with_stdio(false);                         
    cin.tie(NULL);  
    ll t; cin>>t;
    while(t--){
        solve();
    }
} 