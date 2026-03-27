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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        vector<int> arrB, arrC;
        int mini = arr[0];

        for (int val : arr)
        {
            if (val == mini)
                arrB.push_back(val);
            else
                arrC.push_back(val);
        }

        if (arr[0] == arr[n - 1])
        {
            cout << -1 << endl;
            // return 0;
        }
        else
        {
            cout << arrB.size() << " " << arrC.size() << endl;
            for (int val : arrB)
                cout << val << " ";

            cout << endl;

            for (int val : arrC)
                cout << val << " ";

            cout << endl;
        }
    }

    return 0;
}