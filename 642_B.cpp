#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        int b[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int ans=0;
        while(k--){
            int mini=a[0];
            int maxi=b[0];
            int index_max=0;
            int index_min=0;
            for(int i=0; i<n; i++){
                if(a[i]<mini){
                    mini=a[i];
                    index_min=i;
                }
                if(b[i]>maxi){
                    maxi=b[i];
                    index_max=i;
                }
                //cout << "maxi: " << maxi << endl;
                //cout << "mini: " << mini << endl;
            }
            //cout << "swap " << a[index_min] << " and " << b[index_max] << endl;
            if (a[index_min] < b[index_max]){
                swap(a[index_min], b[index_max]);
            }
        }

        for(int i=0; i<n; i++){
            ans+=a[i];
        }
        cout << ans << endl;
    }

    return 0;
}
