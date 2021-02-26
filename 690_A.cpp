#include<iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long arr[n];

        for(int i=0; i<n; i++){
            cin>> arr[i];
        }

        if(n%2==1){
            long long len=n-1;
            long long i=0;

            while(len > n/2){
                cout << arr[i] <<" " << arr[len] << " ";
                i++;
                len--;
            }
            cout << arr[n/2] << endl;
        }else {
            long long len=n;
            long long i=0;

            while(len > n/2){
                cout << arr[i] <<" " << arr[len-1] << " ";
                i++;
                len--;
            }
            cout << endl;
        }
    }


    return 0;
}
