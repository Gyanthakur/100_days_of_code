#include <iostream>
#include <vector>

using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n, a, b;
        cin >> n >> a >> b;
        vector<long> res(n, -1);
        res[0] = a;
        res[n - 1] = b;
        long cur = n;
        
        for (long p = 1; p < n - 1; p++) {
            while (cur == a || cur == b) {
                cur--;
            }
            res[p] = cur--;
        }

        long mn = n + 1;
        long mx = -1;
        for (long p = 0; p < n / 2; p++) {
            mn = (mn < res[p]) ? mn : res[p];
        }
        for (long p = n / 2; p < n; p++) {
            mx = (mx > res[p]) ? mx : res[p];
        }

        if (mn != a || mx != b) {
            cout << "-1" << endl;
            continue;
        }
        for (long p = 0; p < n; p++) {
            cout << res[p] << " ";
        }
        cout << endl;
    }

    return 0;
}
