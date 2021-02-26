#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = -1;
        for(int i=0; i<n-1; i++){
            int curr_ans = -1;
            int curr_sum = 0;;
            int ito=i;

            while((arr[ito]+arr[ito+1])%x != 0){
                curr_sum += arr[ito];

            }

            if(curr_ans != 1){
                if(curr_ans > ans) {
                    ans = curr_ans;
                }
            }

        }
    }

    return 0;
}
