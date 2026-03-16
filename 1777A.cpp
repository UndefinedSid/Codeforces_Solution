#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> arr(n);
        for(ll i=0;i<n;i++){
            cin >> arr[i];
        }
        int ops=0;
        for(ll j=0;j<n-1;j++){
            if(arr[j] % 2 ==arr[j+1] % 2)
                ops++;

        }
        cout << ops << endl;
    }
    return 0;
}