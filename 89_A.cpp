
#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||  str[i] == 'Y'){
            continue;
        }else{
            if(str[i] < 'A' + 26){
                int num = str[i] - 'A';
                char c = 'a' + num;
                cout << "." << c;
            }else{
                cout << "." << str[i] ;
            }

        }
    }
    cout << endl;
}
