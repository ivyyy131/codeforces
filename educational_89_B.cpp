#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, x, m;
        cin >> n >> x >> m;
        int left=x, right=x;
        while(m--){
            int a, b;
            cin >> a >> b;

            if(a <= left && b <= right){
                left = a;
            } else if (a <= left && b >= right){
                left = a;
                right = b;
            } else if (a <= right && b >= right){
                right = b;
            }

        }
       // cout << "left: " << left << "    right: " << right << endl;
        int ans = right - left + 1;
        cout << ans << endl;
    }

    return 0;
}
