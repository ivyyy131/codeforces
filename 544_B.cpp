#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int ans = 0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int cnt[k] = {0};
    for(int i = 0; i < n; i++){
        cnt[arr[i] % k]++;
    }
    ans = cnt[0] / 2;
    if (k % 2 == 0) {
        ans += (cnt[k / 2] / 2);
    }

    for(int i=1; i < (k+1)/2; i++){
        ans+=min(cnt[i],cnt[k-i]);
    }

    cout << ans*2 << endl;
    return 0;
}
