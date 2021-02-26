#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        char A;
        int brum;

        if(n%k==0){
            brum=n/k;
        } else {
            brum=n/k+1;
        }

        int bye=0;
        for(int i=0; i<brum; i++){
                A=0;
           for(int j=0; j<k; j++){
                A=j+97;
                cout << A ;
                bye++;
                if(bye==n) break;
           }
        }
        cout << endl;
    }
    return 0;
}

