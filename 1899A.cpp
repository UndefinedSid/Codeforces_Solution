Problem link --> https://codeforces.com/problemset/problem/1899/A

// C++ code
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n % 3==0){
            cout << "Second" << '\n';
        }else {
            cout << "First" << '\n';
        }
    
    }
    return 0;
}

// python code

def main():
    t=int(input())
    for _ in range(t):
        n=int(input())
        if n % 3==0:
            print("Second")
        else:
            print("First")
    
if __name__== "__main__":
    main()


