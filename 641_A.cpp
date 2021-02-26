#include<bits/stdc++.h>
using namespace std;

int smallestDivisor(int n) {

    for (int i = 3; i * i <= n; i++) {
        if (n % i == 0){
            return i;
        }

    }
    return n;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        if(n%2==0){
            n = n + 2*k;
        } else {
            n = n + 2*(k-1) + smallestDivisor(n);
        }

        cout << n << endl;
    }


    return 0;
}
