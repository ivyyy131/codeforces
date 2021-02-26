#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    while(t--){
        int x,y;
        cin >> x >> y ;
        if(x==0 and y==0){
            cout << 0 << endl;
        }else if(abs(x-y)==0){
            cout << x+y << endl;
        }else if(abs(x-y)==1){
            cout << x+y << endl;
        }else {
            cout << abs(x-y)+x+y-1 << endl;
        }
    }


    return 0;
}
