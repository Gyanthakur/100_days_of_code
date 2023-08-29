#include <bits/stdc++.h>
using namespace std;
int decimalOfSubarr(vector<int> &arr, int l, int r, int n)
{
    int ans = 0, p = 1; // initialize ans and p variables to 0 and 1 respectively
    for (int i = r; i >= l; i--)
    {                      // loop through the subarray from r to l
        ans += arr[i] * p; // add the current bit multiplied by its corresponding power of 2 to the ans
        p *= 2;            // update the power of 2 for the next bit
    }
    return ans; // return the decimal equivalent of the subarray
}
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long ans = 0, num;
        cin >> num;
        int one = 0;
        while (num > 0)
        {
            if (num % 2 == 1)
                one++;
            num /= 2;
        }
        for (int j = 0; j < one; j++)
        {
            ans += 1 * pow(2, j);
        }
        cout << ans << endl;
    }

    return 0;
}