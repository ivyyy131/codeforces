#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, gr;
        cin >> n >> gr;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);

        if(arr[0]+arr[1] <= gr || arr[n-1] <= gr){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
