#include <bits/stdc++.h>
using namespace std;

// standalone gcd for long long
long long gcd_ll(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; ++i) 
            cin >> arr[i];

        bool ok = true;
        for (int i = 0; i < n && ok; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (gcd_ll(arr[i], arr[j]) <= 2) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "NO" : "YES") << '\n';
    }
    return 0;
}