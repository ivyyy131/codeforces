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
        if(a==b){
            cout << 0 << endl;
            continue;
        }

        int bigger=max(a,b);
        int smaller=min(a,b);
        int ans = bigger - smaller;
        if(ans%10==0){
            cout << (ans/10) << endl;
        } else {
            cout << (ans/10)+1 << endl;
        }
    }

    return 0;
}
