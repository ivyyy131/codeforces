#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--){
        long long k, n;
        cin >> k >> n;
        long long ans = n + (n-1)/(k-1);

        cout << ans << endl;

    }
    return 0;
}
