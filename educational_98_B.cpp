#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
	cin>>t;
	while(t--) {
        long long n;
		cin>>n;
        long long x;
        long long sum = 0;
		long long maxi = 0;
		for(int i = 1; i <= n; i++) {
            cin>>x;
            sum += x;
            maxi = max(maxi,x);
		}
		cout<<(n - 1) * max(maxi,(sum + n - 2) / (n - 1)) - sum <<endl;
	}

	return 0;
}
