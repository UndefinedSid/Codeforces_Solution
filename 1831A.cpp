#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> ans;
        ans.reserve(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            ans.push_back(n + 1 - a[i]);

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";

        cout << endl;
    }
    return 0;
}