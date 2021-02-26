#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n, k, z;
		cin >> n >> k >> z;

		int a[n];
		for(int i = 0; i < n; i++){
            cin >> a[i];
		}

		int ans = 0;

		for(int i=0; i <= z; i++) {
			int r = (k-(2*i));
			int sum = 0;
			int mx = 0;

			for(int j = 0; j <= r; j++) {
				sum += a[j];
				mx = max(mx, a[j]+a[j+1]);
			}
			ans = max(ans, sum+(mx*i));
		}
		cout << ans << endl;
	}
}
