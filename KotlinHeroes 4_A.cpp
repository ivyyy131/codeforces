#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;
        int n1, n2, n3, n4;
        n1 = n / (1 + k + k*k + k*k*k );
        n2 = k*n1;
        n3 = k*k*n1;
        n4 = k*k*k*n1;
        cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    }

    return 0;
}
