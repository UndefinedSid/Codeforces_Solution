#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        string str;
        cin >> str;

        int len = n;
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (str[i] != str[j]) {
                len -= 2;
            } else {
                break;
            }
        }

        cout << len << endl;
    }
    
    return 0;
}
