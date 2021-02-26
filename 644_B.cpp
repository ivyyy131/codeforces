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
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int mini = abs(arr[0]-arr[1]);
        //cout << mini << endl;
        for(int i=1; i<n-1; i++){
            if(abs(arr[i]-arr[i+1]) < mini){
                mini = abs(arr[i]-arr[i+1]);
            }
        }
        cout << mini << endl;

    }

    return 0;
}
