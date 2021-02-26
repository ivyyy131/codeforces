#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int br[4];
        br[1]=br[2]=br[3]=-1;
        int ans=s.size()+1;
        for(int i=0; i<s.length();i++){
            br[s[i]-'0']=i;
            if(br[1] < 0 || br[2] < 0 || br[3] < 0){
                continue;
            }
            int start = min(br[1], min(br[2], br[3]));
            int len = i-start+1;
            ans = min(ans,len);
        }
        if(ans == s.size()+1){
            cout << 0 << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}
