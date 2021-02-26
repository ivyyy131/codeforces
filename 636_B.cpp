#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%4!=0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            long long sum = (n/2)*((n/2)+1);
            long long sum2 = ((n/2)+1)*((n/2)+1);
            int Xnum=sum2-sum;
            for(int i=2; i<=n; i+=2){
                cout << i << " ";
            }
            for(int i=1; i<=n+2; i+=2){
                if(i==Xnum){
                    continue;
                }
                cout << i << " ";
            }
        }
    }
    return 0;
}
