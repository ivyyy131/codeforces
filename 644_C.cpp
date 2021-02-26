#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int even=0;
        int odd=0;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even++;
            } else {
                odd++;
            }
        }

        if(odd%2 != even%2){
            cout << "NO" << endl;
        } else {
            if (even%2==0){
                cout << "YES" << endl;
            } else {
                bool flag = true;
                for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (arr[i] % 2 != arr[j] % 2 && abs(arr[i] - arr[j]) == 1) {
                            cout << "YES" <<  endl;
                            flag = false;
                            break;
                        }
                    }
                    if(!flag){
                        break;
                    }
                }
                if(flag){
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}

