#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x,count=0;
    cin>>x;

    while(x/2!=0)
    {
        if(x%2==1)
            count++;

        x=x/2;
    }

    cout<<count+1;
}
