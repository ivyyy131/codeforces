#include<iostream>
using namespace std;

int main(){
    long long n; cin >> n ;
    long long x=((n*n+n)/2) %2 ;
    cout <<  x << endl;
    return 0;
}
