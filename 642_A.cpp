#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        if(n==1){
            cout << 0 << endl;
        } else if(n==2){
            cout << k << endl;
        } else {
            cout << k*2 << endl;
        }

    }
    return 0;
}
