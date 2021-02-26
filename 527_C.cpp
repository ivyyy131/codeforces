#include<bits/stdc++.h>
using namespace std;

string s[1000];
int used[1000];

bool isPrefix(string& c, string& p) {
    return c.substr(0, p.size()) == p;
}

bool solve(string& a, string& b, int n) {
    if (a.substr(1, n-2) != b.substr(0, n-2)) return false;

    string ans = "";
    for (int i = 0; i < n; i++) used[i] = false;
    int brP=0, brS=0;
    for (int i = 0; i < 2*n-2; i++) {
        if (!used[s[i].size()] && isPrefix(a, s[i])) {
            used[s[i].size()] = true;
            ans.push_back('P');
            brP++;
        } else {
            ans.push_back('S');
            brS++;
        }
    }
    if (brP==brS) {
        cout << ans << endl;
        return true;
    }
    return false;
}

int main(){
    int n; cin >> n;
    for (int i = 0; i < 2*n-2; i++) {
        cin >> s[i];
    }

    string a, b;
    for (int i = 0; i < 2*n-2; i++) {
        if (s[i].size() == n-1) {
            if (a == "") a = s[i];
            else b = s[i];
        }
    }
    if (solve(a, b, n));
    else solve(b, a, n);

    return 0;
}
