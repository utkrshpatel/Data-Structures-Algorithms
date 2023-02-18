#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,6,8,5,2};
    int min;
    int temp;
    int count;
    for(int i = 0 ; i<4; i++) {
        min = arr[i];
        temp = arr[i];
        count = i;
        int j = i+1;
        
    
        for(; j<5;j++) {
            
            if(arr[j]<min) {
                min = arr[j];
                count = j;

                //cout<<min<<endl;
            }
            


            
        }

        //cout<<j<<endl;

        arr[i] = arr[count];
        arr[count] = temp;





    }

    for(int i =0 ; i<5;i++) {
        cout<<arr[i]<<endl;
    }


}