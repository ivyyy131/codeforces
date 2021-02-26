#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        if(k>n){
            cout << "NO" << endl;
        } else if (n-k >= 0 && (n-k)%2==0){
            cout << "YES" << endl;
            for(int i=0; i<k-1; i++){
                cout << 1 << " ";
            }
            cout << n-k+1 << endl;
        } else if(n-2*k >= 0 && (n-2*k)%2==0){
            cout << "YES" << endl;
            for(int i=0; i<k-1; i++){
                cout << 2 << " ";
            }
            cout << n - 2*(k-1) << endl;

        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
