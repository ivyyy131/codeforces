#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;
        long long ans = min( (a + b) / 3 , min(a, b) );
        cout << ans << endl;
    }

    return 0;
}
