#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int evenCnt=0;
        int curr=0;
        int ans=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i] ==2)
                evenCnt++;
        }
        if(evenCnt==0)
            cout << 1 << endl;
        else if(evenCnt % 2 !=0)
            cout << -1 << endl;
        else{
            for(int i=0;i<n;i++){
                if(arr[i]==2){
                    curr++;
                }
                if(curr==(evenCnt-curr)){
                    ans=i+1;
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
