#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> str(n);
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }

        int ans = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '.') {
        
            ans++;
            if (i+2 < n && str[i+1] == '.' && str[i + 2] == '.')
            found=true;
            }
        }
        if(found)
             cout << 2 << "\n";
        else    
            cout << ans << endl;
    }
    return 0;
}