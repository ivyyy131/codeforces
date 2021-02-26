#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b>=a){
            cout << b << endl;
            continue;
        }
        if(d>=c){
            cout << -1 << endl;
            continue;
        } else {
            long long num1 = a-b;
            long long num2 = c-d;
            long long numb = num1/num2;
            if(a==b+numb*(c-d)){
            cout << b+numb*c << endl;
            } else {
                numb++;
                cout << b+numb*c << endl;
            }
        }
    }

    return 0;
}
