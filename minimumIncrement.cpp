#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int minIncrementForUnique(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int sum = 0;
    for(int i = 0; i<nums.size()-1; i++) { 
        if(nums[i] >= nums[i+1]) {
            sum += (nums[i] + 1) - nums[i+1];
            nums[i+1] = nums[i] + 1;
            
        }
        

    }

    return sum;
        
}

int main(){
    vector<int>nums{3,2,1,2,1,7};
    cout<<minIncrementForUnique(nums);
}