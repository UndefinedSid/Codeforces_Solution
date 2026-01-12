/*
PROBLEM --> 1883C --> Raspberries

PROBLEM LINK --> https://codeforces.com/problemset/problem/1883/C
You are given an array of integers 𝑎1,𝑎2,…,𝑎𝑛
 and a number 𝑘 (2 ≤ 𝑘 ≤ 5). 
In one operation, you can do the following:
Choose an index 1 ≤ 𝑖 ≤ 𝑛,
Set ai=ai++.
Find the minimum number of operations needed to make the product of all the numbers in the array 𝑎1⋅𝑎2⋅…⋅𝑎𝑛 divisible by 𝑘

Input
Each test consists of multiple test cases. The first line contains a single integer 𝑡
 (1 ≤ t ≤ 10^4) — the number of test cases. Then follows the description of the test cases.

The first line of each test case contains two integers 𝑛 and 𝑘(2 ≤ n ≤ 10^5, 2 ≤ k ≤ 5) — the size of the array 𝑎
 and the number 𝑘.

The second line of each test case contains n integers 𝑎1,𝑎2,…,𝑎𝑛 (1 ≤ ai ≤ 10).

It is guaranteed that the sum of n over all test cases does not exceed 2 * 10^5.

Output
For each test case, output the minimum number of operations needed to make the product of all the numbers in the array divisible by 𝑘
*/


#include <bits/stdc++.h>
using namespace std;

    void check(){
        int n,k;
         cin >> n >> k;
        vector<int> arr(n);
        int ans = k;
        int evenCnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                evenCnt++;

            int ops_k = (k - (arr[i] % k)) % k;
            ans = min(ans, ops_k);
        }

        if (k == 4)
        {
            int ops_four = max(0, 2 - evenCnt);
            ans = min(ans, ops_four);
        }
        cout << ans << endl;
    }

int main()
{
    int t;
    cin >> t;
    while (t--){
       check();
    }

    return 0;
}
