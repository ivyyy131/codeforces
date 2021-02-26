#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int ans=0;
        int curr=1;
        for(int i=0; i<n;i++){
            if(curr == arr[i]){
                ans++;
                curr=0;
            }
            curr++;
        }
        cout << ans << endl;


    }

    return 0;
}
