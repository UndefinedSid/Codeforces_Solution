// Problem Link --> https://codeforces.com/problemset/problem/1881/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string strX,strS;

        cin >> strX;
        cin >> strS;

        int ops=-1;
        
        for(int k=0;k<=20;k++){
            long long copies=1LL << k;
            long long target=min <long long>(copies * n,m + 2LL * n);
            string curr;
            curr.reserve((size_t)target);
            long long added=0;

            while(added < target){
                curr += strX;
                added += n;
            }
            if(curr.find(strS) != string::npos){
                ops=k;
                break;
            }
        }
        cout << ops << '\n';

    }

    return 0;
}
