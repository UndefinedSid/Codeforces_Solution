#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll w, h, d, n;
    cin >> w >> h >> d;
    cin >> n;

    vector<ll> dim = {w, h, d};

    for (ll x = 1; x * x * x <= n; x++) {
        if (n % x != 0) continue;
        ll rem1 = n / x;

        for (ll y = 1; y * y <= rem1; y++) {
            if (rem1 % y != 0) continue;
            ll z = rem1 / y;

            vector<ll> parts = {x, y, z};

            // Try all permutations without sorting
            sort(parts.begin(), parts.end());
            do {
                bool ok = true;
                for (int i = 0; i < 3; i++) {
                    if (dim[i] % parts[i] != 0) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    cout << parts[0] - 1 << " "
                         << parts[1] - 1 << " "
                         << parts[2] - 1 << "\n";
                    return 0;
                }
            } while (next_permutation(parts.begin(), parts.end()));
        }
    }

    cout << -1 << "\n";
    return 0;
}