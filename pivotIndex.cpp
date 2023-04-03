#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int pivotIndex(vector<int>& nums) {
    int size = nums.size();
    int sum1 = accumulate(nums.begin(),nums.end(),0);
    int sum2 = 0;
    
    for(int i = 0; i<size; i++ ) {
        if(i>0) {
            sum2 += nums[i-1];
        }

        sum1 -= nums[i];

        if(sum1 == sum2) {
            return i;
        }



    }

    return -1;
        
}
int main() {
    vector<int>nums {1,7,3,6,5,6};
    cout<<pivotIndex(nums);

}