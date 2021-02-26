#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long dp[100000];
    int maxi=1;
    while(true){
        dp[maxi] = dp[maxi-1]+3*maxi-1;
        if(dp[maxi] >= 1e9){
            break;
        }
        maxi++;
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long ans =0;
        for(int i=maxi; i>0; i--){
            int brKuli = n/dp[i];
            n -= dp[i]*brKuli;
            ans += brKuli;
        }
        cout << ans << endl;
    }

    return 0;
}
