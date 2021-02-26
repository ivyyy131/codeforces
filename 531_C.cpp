#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(x>y){
        cout << n << endl;
    } else {
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i]<=x){
                cnt++;
            }
        }
        cout << (cnt+1) / 2 << endl;
    }

    return 0;
}
