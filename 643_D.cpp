#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;

	if (2 * n <= s) {
		cout << "YES" << endl;
		for (int i = 0; i < n - 1; i++) {
			cout << 2 << ' ';
			s -= 2;
		}
		cout << s << endl;
		cout << 1 << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
