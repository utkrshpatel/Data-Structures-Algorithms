#include <iostream>
#include <algorithm>
using namespace std;

string solve(int arr[], int n) {
    
    sort(arr, arr + n);
    string first_no;
    string second_no;
    long long int final_no;
    string final_str;
    first_no += to_string(arr[0]);
    second_no += to_string(arr[1]);
    for(int i = 2 ;i<n; i++) {
        if(i % 2 == 0) {
            first_no += to_string(arr[i]);
        } else {
            second_no += to_string(arr[i]);
        }
    }

    final_no = stoll(first_no) + stoll(second_no);
    final_str = to_string(final_no);
    return final_str;
}

int main() {
    int arr[] = {9,5,2,3,6,1,2};
    string result = solve(arr,7);
    cout << result << endl;
    return 0;
}
