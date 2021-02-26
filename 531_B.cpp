#include<bits/stdc++.h>
using namespace std;

int main(){
    //int blq = INT_MIN ;
    //cout << blq << endl;
    int n, k;
    cin >> n >> k;

    int arr[n];
    int arr_c[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        arr_c[i]=arr[i];
    }

    sort(arr, arr+n);

    int frequency = 0;
    bool flag = true;
    for(int i=0; i<n-1; i++){
        //cout << frequency << endl;
        if(arr[i] == arr[i+1]){
            frequency++;
            if(frequency>k-1){
                cout << "NO" << endl;
                flag = false;
                break;
            }
        } else if (arr[i] != arr[i+1]){
            frequency = 0;
        }
    }

    if(flag){
        int br=1;
        int arr_cvetove[n]={0};
        for(int i=0; i<n; i++){
            if(br>k){
                br=1;
            }
            arr_cvetove[i] = br;
            br++;
        }

        //for(int j=0; j<n; j++){
        //   cout << arr_cvetove[j] << " "  ;
        //}

        int result[n] = {0};
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(arr[i] == arr_c[j]){
                    result[j]=arr_cvetove[i];
                    arr_c[j] = INT_MIN;
                    break;
                }
            }
        }
        cout << "YES" << endl;
        for(int i=0; i<n; i++){
            cout << result[i] << " "  ;
        }
    }

    return 0;
}
