Codeforces problem link --> https://codeforces.com/problemset/problem/1903/A
  
File: 1903A.cpp  
Brief description:
- A solution that reads multiple test cases. For each test case it reads integers n and k and an array of n integers. It prints "YES" if the array can be considered valid under the program's rule and "NO" otherwise.
- Behavior implemented:
  - If k == 1: check whether the array is already non-decreasing; print "YES" if it is, otherwise print "NO".
  - If k != 1: print "YES" unconditionally.

Intent / typical Codeforces mapping:
- This matches the common pattern for problems where k == 1 means no effective reordering is possible (so the array must already be sorted), and k >= 2 gives enough freedom to reorder elements so the answer is always "YES".
- The code implements a simple check for non-decreasing order only when k == 1.

Input format (as expected by the program):
- t (number of test cases)
- For each test case:
  - n k
  - n integers: the array elements

Output:
- For each test case print a single line with either "YES" or "NO" (capital letters, followed by newline).

Algorithm:
- Read t.
- For each test case:
  - Read n and k and the array ans of length n.
  - If k == 1:
    - Scan the array once to check if ans[i] <= ans[i+1] for all i from 0 to n-2.
    - If the entire array is non-decreasing, print "YES"; otherwise print "NO".
  - Else (k != 1):
    - Print "YES".

Time and space complexity:
- Time: O(sum n) across all test cases (each array scanned at most once).
- Space: O(n) per test case to store the array.

Edge cases:
- n = 1: the array is trivially non-decreasing; output is "YES" for any k.
- All equal elements: considered non-decreasing.
- Large n: algorithm still linear in n per test case; use appropriate input limits in contest settings.

Example
Input:
3
3 1
1 2 3
3 1
3 2 1
5 2
5 4 3 2 1

Output:
YES
NO
YES

Annotated version of the file (ready to paste in place of the original to make intent explicit):

#include <bits/stdc++.h>
using namespace std;

/*
  1903A.cpp - solution explanation:
  - For each test case we read n and k and the array of n integers.
  - If k == 1 we must check whether the array is already non-decreasing.
    If it is, print "YES", otherwise print "NO".
  - For any k != 1 the program prints "YES" (sufficient operations available).
  Complexity: O(n) per test case.
*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }

        if (k == 1) {
            // Check if array is non-decreasing
            bool sorted = true;
            for (int i = 0; i < n - 1; i++) {
                if (ans[i] > ans[i + 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            // For k != 1 the answer is always YES
            cout << "YES\n";
        }
    }
    return 0;
}
