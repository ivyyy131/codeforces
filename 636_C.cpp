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
        int arr[n+1];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        if(arr[n-1]>0){
            arr[n]=-1;
        } else {
            arr[n]=1;
        }

        long long sum = 0;
        int maxi = INT_MIN;

        for(int i = 0; i < n; i++){
            if(maxi < arr[i]){
                maxi = arr[i];
            }
            if( (arr[i] > 0 && arr[i+1] < 0) || (arr[i] < 0 && arr[i+1] > 0) ) {
                sum += maxi;
                maxi = arr[i+1];
            }
        }
        cout << sum << endl;
    }

    return 0;
}
