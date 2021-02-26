#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int ans = 0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    k = arr[k-1];
    if(k==0){
        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                ans++;
            }
        }
    } else {
        for(int i=0; i<n; i++){
            if(arr[i]>=k){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

