#include<bits/stdc++.h>
using namespace std;

int main(){
    int ops=0;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        arr[i]=abs(val);

    }
    sort(arr.begin(),arr.end());
    ops=arr[0];
    cout << ops;
    return 0;
}