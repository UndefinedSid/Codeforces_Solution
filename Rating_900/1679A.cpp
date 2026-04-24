#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n % 2!= 0 || n < 4)
        {
            cout << -1 << endl;
            continue;
        }

        ll mini=(n+4)/6;
        ll maxi=n/4;

        cout << mini << " " << maxi << endl;
    }
    return 0;
}