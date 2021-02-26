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
        int temp = n;
        int cnt = 0;
        int ans = 0;
        int ans_arr[10]= {0};
        while(temp!=0){
            if(temp%10 == 0){
                cnt++;
                temp = temp/10;

            } else {
                ans_arr[ans]=temp%10;
                for(int i=0; i<cnt; i++){
                    ans_arr[ans]*=10;
                }
                cnt++;
                ans++;
                temp = temp/10;
            }
        }

        cout << ans << endl;
        for(int i=0; i<ans; i++){
            cout << ans_arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
