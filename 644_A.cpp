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
        int num = min(a,b);
        if(num*2 >= max(a,b)){
            cout << (num*2)*(num*2) << endl;
        } else {
            cout << max(a,b) * max(a,b) << endl;
        }
    }

    return 0;
}
