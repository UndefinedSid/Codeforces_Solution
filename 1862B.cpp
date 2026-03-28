#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arrB(n),arrA;
        for(int i=0;i<n;i++)
            cin >> arrB[i];

        arrA.push_back(arrB[0]);

        for(int i=1;i<n;i++){
            if(arrB[i] >= arrB[i-1])
                arrA.push_back(arrB[i]);
            else{
                arrA.push_back(arrB[i]);
                arrA.push_back(arrB[i]);
            }
        }

        cout << arrA.size() << endl;

        for(auto& it : arrA){
            cout << it << " ";
        }
        cout << endl;

    }
   
    return 0;
}
