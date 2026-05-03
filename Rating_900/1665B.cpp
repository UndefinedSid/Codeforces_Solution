Problem link --> "https://codeforces.com/problemset/problem/1665/B"

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long tc;
    cin >> tc;
    while (tc--) {
        long long sz;
        cin >> sz;
        vector<long long> v(sz);
        map<long long, long long> counts;
        
        for (int i = 0; i < sz; i++) {
            cin >> v[i];
            counts[v[i]]++;
        }

        long long max_f = 0;
        for (auto const& [val, freq] : counts) {
            if (freq > max_f) {
                max_f = freq;
            }
        }

        long long ans = 0;
        while (max_f < sz) {
            long long remaining = sz - max_f;
            ans++; 
            
            if (remaining >= max_f) {
                ans += max_f;
                max_f *= 2;
            } else {
                ans += remaining;
                max_f = sz;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
