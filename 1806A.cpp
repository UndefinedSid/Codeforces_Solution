#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;

        if(d < b){
            cout << -1 << endl;
            continue;
        }
        int steps= d-b;
        a += steps;
        
        if(a < c){
            cout << -1 << endl;
            continue;
        }

        steps += (a - c);
        cout << steps << endl;
    }
    return 0;
}


