#include<iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        char s1[n];
        for(int i = 0; i< n; i++){
            cin >> s1[i];
        }

        if(n<4){
            cout << "NO" << endl;
            continue;
        }


        if((s1[0]=='2') && (s1[1]=='0') && (s1[2]=='2') && (s1[3]=='0')){
                ///cout << s1[0] << s1[1] << s1[2] << s1[3] << endl;
            cout << "YES" << endl;
        } else  if(s1[0]=='2' && s1[1]=='0' && s1[2]=='2' && s1[n-1]=='0'){
                ///cout << s1[0] << s1[1] << s1[2] << s1[n-1] << endl;
            cout << "YES" << endl;
        } else  if(s1[0]=='2' && s1[1]=='0' && s1[n-2]=='2' && s1[n-1]=='0'){
                ///cout << s1[0] << s1[1] << s1[n-2] << s1[n-1] << endl;
            cout << "YES" << endl;
        } else  if(s1[0]=='2' && s1[n-3]=='0' && s1[n-2]=='2' && s1[n-1]=='0'){
            cout << "YES" << endl;
        } else  if(s1[n-4]=='2' && s1[n-3]=='0' && s1[n-2]=='2' && s1[n-1]=='0'){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }


    return 0;
}

