#include<iostream>
using namespace std;

int main(){
		int t;
		cin >> t;
		int ans=0;
		int curr2=0;
		for(int i=0; i<t; i++) {
			int curr=0;
			for(int j=0; j<3; j++) {
				cin >> curr2;
				if(curr2==1) {
					curr++;
				}
			}
			if(curr>=2) {
				ans++;
			}
		}

		cout << ans << endl;


    return 0;
}
