#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        ll cnt=1;
        ll maxLen=1;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<=k)
                cnt++;
            else    
                cnt=1;
            
            maxLen=max(maxLen,cnt);
        }
        cout << n-maxLen << endl;
    }
    return 0;
}