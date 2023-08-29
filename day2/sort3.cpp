#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // int ar[3];
    // if (a < b && a < c)
    // {
    //     ar[0] = a;
    //     if (b < c)
    //     {
    //         ar[1] = b;
    //         ar[2] = c;
    //     }
    //     if (b > c)
    //     {
    //         ar[1] = c;
    //         ar[2] = b;
    //     }
    // }
    // else if (a > b && b < c)
    // {
    //     ar[0] = b;
    //     if (a < c)
    //     {
    //         ar[1] = a;
    //         ar[2] = c;
    //     }
    //     if (a > c)
    //     {
    //         ar[1] = c;
    //         ar[2] = a;
    //     }
    // }
    // else if (a > c && b > c)
    // {
    //     ar[0] = b;
    //     if (a < b)
    //     {
    //         ar[1] = a;
    //         ar[2] = b;
    //     }
    //     if (a > b)
    //     {
    //         ar[1] = b;
    //         ar[2] = a;
    //     }
    // }

    // for (int i=0;i<3;i++)
    // {
    //     cout<<ar[i]<<endl;
    // }
    // cout<<ar[0]<<endl;
    // cout<<ar[1]<<endl;
    // cout<<ar[2]<<endl;

    if(a<=b && b<=c) cout<<a<<endl<<b<<endl<<c<<endl;
    else if(a<=c && c<=b) cout<<a<<endl<<c<<endl<<b<<endl;
    else if(b<=a && a<=c) cout<<b<<endl<<a<<endl<<c<<endl;
    else if(b<=c && c<=a) cout<<b<<endl<<c<<endl<<a<<endl;
    else if(c<=a && a<=b) cout<<c<<endl<<a<<endl<<b<<endl;
    else if(c<=b && b<=a) cout<<c<<endl<<b<<endl<<a<<endl;
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}