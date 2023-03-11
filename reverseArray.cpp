#include <iostream>
using namespace std;

void drivercode(int arr[],int c,int data,int size) {
    if(c==size-1) {
        arr[c] = data;
        return;

    }

    int temp = arr[c+1];
    drivercode(arr,c+1,data,size);
    arr[c] = temp;
}

void reverse(int arr[],int size) {
    static int counter  = -1;
    
    if(counter == size-1) {
        return;
    }
    counter++;
    
    
    reverse(arr,size);

    
    drivercode(arr,counter,arr[counter],size);
    counter--;
}

int main() {
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i = 0 ; i<n; i++) {
        cout<<arr[i]<<endl;
    }
}