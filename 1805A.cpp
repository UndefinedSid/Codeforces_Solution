#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int totalXor=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            totalXor ^= arr[i];
        }

        if(n % 2==1)
            cout << totalXor << endl;
        else{
            if(totalXor==0)
                cout << totalXor << endl;
            else
                cout << -1 << endl;
        }
    }
    
    return 0;
}
