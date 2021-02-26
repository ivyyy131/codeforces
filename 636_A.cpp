#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
		int k=3;
		while(n%k!=0){
            k=k*2+1;
		}
		cout<<n/k<<endl;

    }
    return 0;
}
