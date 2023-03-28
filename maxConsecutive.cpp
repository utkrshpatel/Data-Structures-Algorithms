#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
      int sum = 0;
      int max = 1;
      int isEntered = 0;

    for(int i = 0; i<nums.size(); i++) {
        if(nums[i]==0) {
            sum = 0;
            continue;
           // continue;
        }
        isEntered = 1;

        sum++;
        if(sum>max) {
            max = sum;
        }
      
      
    }

    if(isEntered == 1) {
        return max;

    }

    return 0;

      

        
        
}

    int main() {
        vector<int> nums {1,1,0,1,1,1,1};
        cout<<findMaxConsecutiveOnes(nums);

    }