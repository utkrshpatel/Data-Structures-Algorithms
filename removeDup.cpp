#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0,0,1,1,1,2,2,2,3,4};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<size-1; i++) {
        if(arr[i] == arr[i-1]) {
            continue;
        }
        for(int j = i+1; j<size ; j++) {

            if(arr[i] == arr[j]) {
                sum++;

            } 
        }

    }

    for(int i = 0; i<size-sum ; i++) {
        for(int j = i+1 ; j<size ;j++) {
            if(arr[j]>arr[i]) {
                arr[i+1] = arr[j];
                break;

            }
        }
    }

    for(int i = 0 ; i<size-sum ; i++) {
        cout<<arr[i]<<endl;
    }
}