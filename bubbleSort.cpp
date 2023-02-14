#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10,9,8,7,6,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int c;

    for(int i = 1; i<n; i++) {
        for(int j = 0; j<n-i; j++) {
            if(arr[j]>arr[j+1]) {
                c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }

        }
    }

    for(int i = 0 ;i<n; i++) {
        cout<<arr[i]<<endl;
    }



}