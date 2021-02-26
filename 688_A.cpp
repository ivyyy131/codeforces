#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        int arr[101] = {0};
        int curr;
        for(int i=0; i<n+m; i++){
            cin >> curr;
            arr[curr]++;
        }

        int ans = 0;
        for(int i=1; i<101; i++){
            if(arr[i]==2){
                ans++;
            }
        }
        cout << ans << endl;
    }




    return 0;
}
