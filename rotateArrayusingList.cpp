//Program to rotate array by k times
#include <iostream>
#include <vector>
#include <list>
using namespace std;





void rotate(vector<int>& nums, int k) {
    list<int>li;

    for(int i = 0; i<nums.size(); i++) {
        li.push_back(nums[i]);
    }

    for(int i = 0; i<k; i++) {
        int data = li.back();
        li.pop_back();
        li.push_front(data);
    }

    auto it = li.begin();

    for(int i = 0; i<nums.size(); i++) {
        nums[i] = *it;
        it++;
    }
 
}



int main() {
    vector<int>nums{-1,-100,3,99};
    int k = 2;
    
    rotate(nums,k);

    
    for(int i = 0; i<nums.size(); i++) {
       cout<<nums[i]<<" ";
    }
}
