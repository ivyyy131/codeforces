#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m;
    long long z;
 
    cin >> n >> m;
 
    if(m%n!=0){
        cout << -1 << endl;
        return 0;
    }
    if (m==n){
        cout << 0 << endl;
        return 0;
    }
 
    z=m/n;
    int ans=0;
 
    while(z%2==0){
        z=z/2;
        ans++;
    }
    while (z%3==0){
        z=z/3;
        ans++;
    }
 
    if(z!=1){
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}