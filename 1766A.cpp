#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void roundNum(ll curr,ll limit,vector<ll>& number){
    if(curr > limit)
        return;

    if(curr != 0)
        number.push_back(curr);

    if(curr != 0)
        roundNum(curr * 10,limit,number);
}

int main(){

    vector<ll> number;
    for(int d=1;d<=9;d++){
        number.push_back(d);
        roundNum( d*10, 999999,number);
    }
    sort(number.begin(),number.end());

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        ll ans=upper_bound(number.begin(),number.end(),n)- number.begin();
        cout << ans << endl;
    }
    return 0;
}