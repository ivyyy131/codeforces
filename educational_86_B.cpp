#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int n0=0, n1=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='1'){
                n1++;
            } else {
                n0++;
            }
        }

        if(n1 == 0 || n0 == 0){
            cout<<s<<endl;
        } else {
            for(int i=0; i<s.length(); i++){
                if(s[i]=='1' && s[i+1]=='1'){
                    cout<<s[i]<<'0';
                }
                else if(s[i]=='0' && s[i+1]=='0'){
                    cout<<s[i]<<"1";
                }
                else{
                    cout<<s[i];
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
