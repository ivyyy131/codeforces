#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int m = n/2+1;

        long long ans = 0;
        for (long long i = 1; i <= m-1; i++) {
            ans += 8*i*i;
        }
        cout << ans << endl;
    }
    return 0;
}
