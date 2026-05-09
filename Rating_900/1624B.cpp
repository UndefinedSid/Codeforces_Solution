Problem link --> "https://codeforces.com/problemset/problem/1624/B"

#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        bool ans=false;

        ll newA=2*b-c;
        if(newA / a > 0 && newA % a ==0)
            ans=true;

        ll newB=(a+c)/2;
        if(newB / b > 0 && newB % b==0 && (c-a) % 2 ==0)
            ans=true;

        ll newC=2*b-a;
        if(newC / c > 0 && newC % c==0 )
            ans=true;

        if(ans)           
         cout << "YES\n";
        else
         cout << "NO\n";
    }
    return 0;
}
