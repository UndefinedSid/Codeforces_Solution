#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        
        ll xKing,yKing,xQueen,yQueen;
        cin >> xKing >> yKing;
        cin >> xQueen >> yQueen;

        set<pair<ll,ll>> king_hit,queen_hit;

        for(int i=0;i<4;i++){
            king_hit.insert({xKing + dx[i] * a,yKing + dy[i] * b});
            king_hit.insert({xKing + dx[i] * b,yKing + dy[i] * a});

            queen_hit.insert({xQueen + dx[i] * a,yQueen + dy[i] * b});
            queen_hit.insert({xQueen + dx[i] * b,yQueen + dy[i] * a});
        }
        int ans=0;

        for(auto pos : king_hit){
            if(queen_hit.find(pos) != queen_hit.end())
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}