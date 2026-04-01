#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> temp;
        temp.push_back(0);  

        for (int i = 0; i < n; i++) {
            long long val;
            cin >> val;
            temp.push_back(val);
        }

        temp.push_back(x);   
        long long maxi = 0;

        for (int i = 1; i < temp.size(); i++) {
            long long diff = temp[i] - temp[i - 1];

            if (i == temp.size() - 1) {
                diff = 2 * diff;  
            }

            maxi = max(maxi, diff);
        }

        cout << maxi << '\n';
    }
    return 0;
}
