#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int arr[1000][1000] = {{0}};
    while(t--){
        string s;
        cin >> s;
        int ans=0;
        //int start_position = arr[100000][100000];
        int i=500, j=500;
        //int curr_position=[100000][100000];
        for(int k=0;k<s.length();k++){
            if(s[k]=='N'){
                i--;
                if(!(i==500 && j==500)){
                    if(arr[i][j]==0){
                        ans+=5;
                    } else {
                        ans++;
                    }
                    arr[i][j]='N';
                }else {
                    i--;
                    if(arr[i][j]==0){
                        ans+=5;
                    } else {
                        ans++;
                    }
                    arr[i][j]='N';
                }

            } else if(s[k]=='S'){
                i++;
                if(!(i==500 && j==500)){
                    if(arr[i][j]==0){
                        ans+=5;
                    } else {
                        ans++;
                    }
                    arr[i][j]='S';
                }else {
                    i++;
                    if(arr[i][j]==0){
                        ans+=5;
                    } else {
                        ans++;
                    }
                    arr[i][j]='S';
                }

            } else if(s[k]=='W'){
                j--;
                if(!(i==500 && j==500)){
                    if(arr[i][j]==0){
                        ans+=5;
                    } else {
                        ans++;
                    }
                    arr[i][j]='W';
                }else {
                    j--;
                    if(arr[i][j]==0){
                        ans+=5;
                    } else {
                        ans++;
                    }
                    arr[i][j]='W';
                }
            } else if (s[k] =='E'){
                j++;
                if(!(i==500 && j==500)){
                    if(arr[i][j]==0){
                        ans+=5;
                    } else {
                        ans++;
                    }
                    arr[i][j]='E';
                }else {
                    j++;
                    if(arr[i][j]==0){
                        ans+=5;
                    } else {
                        ans++;
                    }
                    arr[i][j]='E';
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
