Problem Link --> "https://codeforces.com/problemset/problem/1875/A"

#include <bits/stdc++.h>
using namespace std;
using ll =long long;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        if (!(cin >> a >> b >> n))
            return 0;

        vector<ll> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        ll ans = b;
        for (int i = 0; i < n; i++)
        {
            ans += min(x[i], a - 1);
        }

        cout << ans << "\n";
    }
    return 0;
}
