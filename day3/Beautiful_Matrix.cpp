#include<bits/stdc++.h>
using namespace std;
int main(){
    int a =0;
    int n=5,m=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a;
            if(a==1)
            cout<<abs(i-3)+abs(j-3);
        }
    }
return 0;   
}