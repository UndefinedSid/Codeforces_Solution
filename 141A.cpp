#include<bits/stdc++.h>
using namespace std;

bool isSubset(const unordered_map<char,int>& mp,
              const unordered_map<char,int>& mpAns) {
    if(mp.size() < mpAns.size())
    return false;
    for (auto& [key, val] : mp) {
        auto it = mpAns.find(key);
        if (it == mpAns.end() || it->second != val) {
            return false; 
        }
    }
    return true;
}

int main(){
    string w1,w2,w3;
    cin >> w1 >> w2 >> w3;

    unordered_map<char,int> mp,mpAns;
    for(char ch : w1){
        mp[ch]++;
    }
    for(char ch : w2){
        mp[ch]++;
    }

    for(char ch : w3){
        mpAns[ch]++;
    }
    cout << (isSubset(mp,mpAns) ? "YES" : "NO" ) << endl;
    return 0;
}