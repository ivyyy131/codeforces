#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n, k, l;
        cin >> n >> k >> l;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            cout << arr[i];
        }



        int sum=0;
        int index=0;
        for(int i=0; i <= k; k++){
            if(index==0){
                index++;
                sum += arr[index];
            } else if((index == (n-1)) and (l>0)){
                index--;
                sum += arr[index];
                l--;
            } else if(((index+1)<(index-1)) and (l>0)){
                index--;
                sum += arr[index];
                l--;
            } else if((index+1)>(index-1)){
                index++;
                sum += arr[index];
            }
        }
        cout << sum << endl;

    }

    return 0;
}


