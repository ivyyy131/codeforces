#include<iostream>
using namespace std;
 
int main(){
    int sum[4];
    int a, b, c;
    for(int i=0; i<4; i++){
        cin >> sum[i];
    }
    int flag;
    int min;
    for(int i=0;i<4;i++){
        flag=i;
        min=sum[i];
        for(int j=i+1;j<4;j++){
            if(sum[j]<min){
                min=sum[j];
                flag=j;
            }
        }
             sum[flag]=sum[i];
             sum[i]=min;
    }
 
    cout << sum[3]-sum[0] << " "<< sum[3]-sum[1] << " "<< sum[3]-sum[2] << endl;
 
 
    return 0;
}