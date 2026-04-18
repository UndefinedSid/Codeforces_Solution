#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int zeros = 0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i] == 0){
                zeros++;
            }
        }
        bool found = false;
        int l=0,r=n-1;
        while(arr[l]==0)
            l++;
        while(arr[r]==0)
            r--;

        for(int i=l;i<=r;i++){
            if(arr[i] == 0)
                found = true;
        }
        
        if(zeros==n)
            cout << 0 << endl;
        else if(found==false)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}