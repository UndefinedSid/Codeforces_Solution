Problem link --> "http://codeforces.com/contest/1666/problem/D"

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s,t;
        cin >> s >> t;
        map<char,int> need;
        for(char c : t)
            need[c]++;
        
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            char ch=s[i];
            if(need[ch] > 0){
                ans += ch;
                need[ch]--;
            }
        }
        reverse(ans.begin(),ans.end());
        if(ans==t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
