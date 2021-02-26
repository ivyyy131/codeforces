#include<bits/stdc++.h>
using namespace std;
long long largestDigits(long long n) {
    long long largest = 0;
    while(n) {
        long long r = n % 10;
        largest = max(r, largest);
        n = n / 10;
    }
    return largest;
}

long long smallestDigits(long long n) {
    long long smallest = 9;
    while(n) {
        long long r = n % 10;
        smallest = min(r, smallest);
        n = n / 10;
    }
    return smallest;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a, k;
        cin >> a >> k;
        k--;
        while(k--){
            if(smallestDigits(a)==0){
                break;
            }
            a+= smallestDigits(a)*largestDigits(a);
        }
        cout << a << endl;
    }

    return 0;
}
