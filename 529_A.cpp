#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;

    char arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int index = 0;
    for(int i=0; i<n; i++){
        cout<<arr[i];
        index++;
        i=i+index;
    }
    return 0;
}
