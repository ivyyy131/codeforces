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
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int Alice = arr[0];
        int Bob = 0;
        int currA = arr[0];
        int currB = 0;
        int l = 1;
        int r = n - 1;
        int moves = 1;

        while(l<=r){
            currB = arr[r];
            r--;
            moves++;
            while(currB<=currA && r>=l){
                currB += arr[r];
                r--;
            }
            Bob += currB;
            if(l>r){
                break;
            }
            currA = arr[l];
            l++;
            while(currA<=currB && l<=r){
                currA += arr[l];
                l++;
            }
            moves++;
            Alice += currA;
        }
        cout << moves << " " << Alice << " " << Bob << endl;
    }

    return 0;
}
