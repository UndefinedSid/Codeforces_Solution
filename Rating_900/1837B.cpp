Problem link --> "https://codeforces.com/problemset/problem/1837/B"

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        int maxi=1;
        int cnt=1;

        for(int i=1;i<n;i++){
            if(str[i]== str[i-1]){
                cnt++;
            }else{
                maxi=max(cnt,maxi);
                cnt=1;
            }
        }
        maxi=max(cnt,maxi);
        cout << maxi+1 << endl;
    }
    return 0;
}
