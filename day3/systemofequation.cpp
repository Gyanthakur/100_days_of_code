#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int value = 0;
    // find a and b 
    // a^2+b = n && a + b^2 = m
    for(int a =0;a*a<=n && a<=m ;a++)
    {
        int b = n-a*a;
        if(a+b*b == m)
        value++;
    }
    cout<<value;

return 0;
}