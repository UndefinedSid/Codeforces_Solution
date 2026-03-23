#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxi=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==0){
                cnt++;
                maxi=max(maxi,cnt);
            }else{
                cnt=0;
            }
        }
    
        cout << maxi << endl;
    }
    return 0;

}