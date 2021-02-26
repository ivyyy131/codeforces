#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		int ans=INT_MAX;
		string s;
		cin >> s;

		for(int i = 0; i < 10; i++) {
			for(int j=0; j < 10; j++) {
				int l = s.length();
				int is=0;
				int cnt=0;
				for(int k = 0; k < l; k++) {
					if(is==0 and (s[k]-'0')==i) {
						cnt++;
						is=1;
					}
					else if(is==1 and (s[k]-'0')==j) {
						cnt++;
						is=0;
					}
				}
				if(i != j and cnt % 2 == 1){
                    cnt--;
				}
				if(cnt!=0){
                    ans = min(l-cnt,ans);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

