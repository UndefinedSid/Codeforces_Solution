#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);

        int maxi=arr[n-1] - arr[0];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=1;i<n;i++)
            maxi=max(maxi,arr[i]-arr[0]);

        for(int i=0;i<n-1;i++)
            maxi=max(maxi,arr[n-1] - arr[i]);

        for(int i=0;i<n-1;i++)
            maxi=max(maxi,arr[i] - arr[i+1]);

       
        cout << maxi << endl;
    }
    return 0;
}