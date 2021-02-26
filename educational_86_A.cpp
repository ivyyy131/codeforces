#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        unsigned long long x, y, a, b;
        cin >> x >> y >> a >> b;

        if (x >= y) {
            if(a+a <= b){
                cout << (x+y)*a << endl;
            } else {
                cout << (y * b) + ((x - y) * a) << endl;
            }
        } else {
            if(a+a <= b){
                cout << (x+y)*a << endl;
            } else {
                cout << (x * b) + ((y - x) * a) << endl;
            }
        }
    }

    return 0;
}

