#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int val=1;
        while(n % val ==0)
            val++;

        cout << val-1 << endl;
    }
    return 0;
}