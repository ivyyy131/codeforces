#include<bits/stdc++.h>
using namespace std;

int tmp[10];

void mergeStep(int a[], int left, int right) {
    int middle = (left+right)/2;

    int l=left, r=middle+1;
    for (int i = left; i <= right; i++) {
        if (l > middle) {
            tmp[i]=a[r];
            r++;
        } else if(r > right) {
            tmp[i]=a[l];
            l++;
        } else if (a[l] <= a[r]) {
            tmp[i]=a[l];
            l++;
        } else {
            tmp[i]=a[r];
            r++;
        }
    }

    cout << "We will merge -> " ;
    for (int i = left; i <= middle; i++){
        cout << a[i] << " " ;
    }
    cout << "   and   " ;
    for (int i = middle+1; i <= right; i++){
        cout << a[i] << " " ;
    }
    cout << endl;

    for (int i = left; i <= right; i++) a[i]=tmp[i];
    cout << "After marge the arr is: " ;
     for (int i = left; i <= right; i++) cout << a[i] << " " ;
     cout << endl << endl;

}

void mergeSort(int a[], int left, int right) {
    if (left == right) return;

    int middle = (left+right)/2;
    mergeSort(a, left, middle);
    mergeSort(a, middle+1, right);

    mergeStep(a, left, right);
}

int main() {
    int a[8]={8,7,6,5,4,3,2,1};
    cout << "Before sort: ";
    for (int i = 0; i < 8; i++) cout << a[i] << " "; cout << endl;
    cout << endl;
    mergeSort(a, 0, 7);
    cout << "After sort: ";
    for (int i = 0; i < 8; i++) cout << a[i] << " "; cout << endl;

    return 0;
}
