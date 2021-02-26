#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }
    sort(arr, arr+n);
    int ans_1 = arr[n-2]-arr[0];
    int ans_2 = arr[n-1]-arr[1];
    if(ans_1<ans_2) cout << ans_1 << endl;
    else cout << ans_2 << endl;

}

