#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        ll sum=0;
       
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];

        }
        vector<ll> pre(n+1,0);
        for(int i=1;i<=n;i++)
            pre[i]=pre[i-1] + arr[i-1];

        while(q--){
            ll l,r,k;
            cin >> l >> r >> k;

            ll removeSum=pre[r] - pre[l-1];
            ll addSum=(r-l+1) * k;

            ll total=sum - removeSum + addSum;

            if(total % 2==1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }
    }
    return 0;
}