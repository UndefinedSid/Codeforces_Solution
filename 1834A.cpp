#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int cntNeg=0;
        int ops=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]== -1)
                cntNeg++;
        }
        int cntPos=n-cntNeg;
        // if(cntNeg == cntPos || cntPos==n || (cntNeg % 2==0 && cntNeg < cntPos))
        //     cout << 0 << endl;
        // else{
            while(cntPos < cntNeg || cntNeg % 2 == 1 ){
                ops++;
                cntPos++;
                cntNeg--;
            }
            cout << ops << endl;
        // }

    }
    return 0;
}