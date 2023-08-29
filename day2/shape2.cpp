#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n-1; i >= 0; i--)
    {

        int space = i;
        // cout<<space<<endl;

        for (int j = 2 * n - i - 1; j > 0; j--)
        {
            if (space)
            {
                cout << " ";
                space--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}