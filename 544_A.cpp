#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int h1, m1, h2, m2;
    char dot1,dot2;
    cin >> h1 >> dot1 >> m1 >> h2 >> dot2 >> m2;
    int minuti1, minuti2, sumMIN, avrMIN;
    minuti1=h1*60+m1;
    minuti2=h2*60+m2;
    sumMIN=minuti1+minuti2;
    avrMIN=sumMIN/2;
 
    int h3=avrMIN/60,m3=avrMIN%60;
 
    if(h3 < 10 && m3 < 10){
        cout << "0" << h3 << ":" << "0" << m3 <<endl;
    }
    else if(h3<10 && m3 >= 10){
        cout << "0" << h3 << ":" << m3 <<endl;
    }
    else if(h3>=10 && m3 <10){
        cout << h3 << ":" << "0" << m3 <<endl;
    }
    else if(h3>=10 && m3>=10){
        cout<< h3 << ":" << m3 <<endl;
    }
 
    return 0;
}