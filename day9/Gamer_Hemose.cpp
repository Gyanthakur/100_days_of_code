#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
       long long int n,h;
       cin>>n>>h;
       long long int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a,a+n);

       int x = a[n-1];
       int y = a[n-2];
        long long int s = x+y;
       if(h<=x){
        cout<<1<<endl;
       }
       else if(h<=s){
        cout<<2<<endl;
       }
       else{
        long long int ans =  (h/s)*2;
        if(h%s==0){
            ans = ans+0;
        }
        else if(h%s<=x){
            ans++;
        }
        else{
            ans+=2;
        }
        cout<<ans<<endl;
       }
    }
    return 0;
}