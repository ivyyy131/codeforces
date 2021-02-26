#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;

        int arr[n+1]={};
        int arr_copy[n+1];

        int curr=0;
        for(int i=0; i<n; i++){
            cin>>curr;
            arr[curr]++;
            arr_copy[curr] = i;
        }

        int ans = -1;
        for(int i=0; i<n+1; i++){
            if(arr[i]==1){
                ans = arr_copy[i]+1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
