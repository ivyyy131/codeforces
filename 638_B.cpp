#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n, k;
        cin >> n >> k;

        set<int>s;
        for (int i = 0; i < n; i++){
            int a;
            cin>>a;
            s.insert(a);
        }

        if (s.size() > k){
            cout<<-1<<endl;
        } else {
            cout<< n * k <<endl;
            for (int i=0;i<n;i++){

                for (int b:s){
                    cout << b << " " ;
                }

                for (int j = 0; j < k - s.size(); j++){
                    cout << 1 << " " ;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
