#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        if(n%2==1 && m%2==1){
            cout <<(m+1)/2 * (n-1) << endl;
        } else {
            if(n%2==0){
                cout << n/2 * m << endl;
            } else {
                cout << m/2 * n << endl;
            }
        }
    }

    return 0;
}
