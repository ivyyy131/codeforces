#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d, sumTime;
    cin >> d >> sumTime;

    int arr_left[d];
    int arr_right[d];
    for(int i=0; i<d; i++){
        cin >> arr_left[i];
        cin >> arr_right[i];
    }

    long long sum_left=0;
    long long sum_right=0;
    for(int i=0; i<d; i++){
        sum_left += arr_left[i];
        sum_right += arr_right[i];
    }

    if(sumTime >= sum_left && sumTime <= sum_right){
        cout << "YES" << endl;
        bool endi=true;
        if(sum_left == sumTime){
            for(int i=0; i<d; i++){
                cout << arr_left[i] << " ";
            }
            endi=false;
        }
        while(endi){
            for(int i=0; i<d; i++){
                if(arr_left[i]<arr_right[i]){
                    arr_left[i]++;
                    sum_left++;
                    if(sum_left == sumTime){
                        for(int i=0; i<d; i++){
                            cout << arr_left[i] << " ";
                        }
                        endi=false;
                        break;
                    }
                }
            }
        }
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
