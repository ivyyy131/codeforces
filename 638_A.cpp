#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n ;
        int a=0;
        for(int k=1; k <= n/2-1; k++){
            a+=1<<k;
        }
        for(int k=n/2; k <= n-1; k++){
            a-=1<<k;
        }
        cout <<  (1<<n) + a << endl;
    }

    return 0;
}

