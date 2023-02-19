#include <iostream>
using namespace std;

void mergeSort(int a1[],int s_a1, int a2[],int s_a2,int a3[],int s) {
    int a,b,k,m;
    a = b= 0;
    k = s_a1;
    m = s_a2;
    for(int i = 0 ; i<s ;i++) {
        if(a == k || b == m) {
            if(a==k) {
                for(int f  = i; f<s; f++) {
                    a3[f] = a2[b];
                    b++;
                }
            }

            else{

                for(int f  = i; f<s; f++) {
                    a3[f] = a1[a];
                    a++;
                }

            }
            return;
        }

        else {
            if(a1[a]<a2[b]) {
                a3[i] = a1[a];
                a++;

            }

            else {
                a3[i] = a2[b];
                b++;
            }
        }

    }

  



    

}


int main() {
    int size_array1, size_array2;
    cout<<"Enter Size of Elements in array 1: ";
    cin>>size_array1;
    int arr1[size_array1];

    for(int i = 0 ; i<size_array1 ;i++) {
        cout<<"Enter element "<<i<<" ";
        cin>>arr1[i];
    }

    cout<<"Enter Size of Elements in array 2: ";
    cin>>size_array2;
    int arr2[size_array2];

    for(int i = 0 ; i<size_array2 ;i++) {
        cout<<"Enter element "<<i<<" ";
        cin>>arr2[i];
    }
    
   
   

    int size = size_array1 + size_array2;
    int arr3[size];
    mergeSort(arr1,size_array1,arr2,size_array2,arr3,size);

    for(int i = 0 ;i <size ;i++) {
        cout<<arr3[i]<<endl;
    }

    

}