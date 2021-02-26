#include <bits/stdc++.h>
using namespace std;

double PI = acos(-1);

int main(){
    cout << fixed << setprecision(12);
    int t;
    cin >> t;

    while(t--){
        double n;
        cin >> n;
        cout << 1 / tan(PI / (2 * n)) << endl;
    }

    return 0;
}
