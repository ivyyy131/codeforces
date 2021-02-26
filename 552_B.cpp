#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    sort(num, num+n);
    vector<int> v;
    v.push_back(num[0]);
    for (int i = 1; i < n; i++) {
        if (num[i] != num[i-1]) v.push_back(num[i]);
    }
    if (v.size() == 1) cout << 0 << endl;
    else if (v.size() == 2) {
        if ((v[1]-v[0])%2==0) cout <<(v[1]-v[0])/2 << endl;
        else cout << v[1]-v[0];
    } else if (v.size() == 3 && v[1]-v[0]==v[2]-v[1]) {
        cout << v[1]-v[0] << endl;
    } else {
        cout << -1 << endl;
    }
 
    return 0;
}