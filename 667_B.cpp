#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;

        long long ans1=0, ans2=0;
        long long ax = a-x;
        long long by = b-y;

        if(ax>=n){
            ans1=(a-n)*b;
        } else {
            if((ax+by)<n){
                ans1=x*y;
            } else {
                ans1=x*(b-(n-ax));
            }

        }

        if(by>=n){
            ans2=a*(b-n);
        } else {
            if((ax+by)<=n){
                ans2=x*y;
            } else {
                ans2=y*(a-(n-by));
            }
        }

        cout << min(ans1,ans2) << endl;


    }

    return 0;
}

