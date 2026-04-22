Problem link --> "https://codeforces.com/problemset/problem/1883/B"

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        long long oddCount = 0;
        for (int i = 0; i < 26; i++) {
            oddCount += freq[i] % 2;
        }

        if (oddCount > k + 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
