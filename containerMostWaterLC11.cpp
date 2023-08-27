#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size()-1;
    int maxTotal = 0;

    while(left <= right) {
        maxTotal = max(maxTotal,min(height[left],height[right]) * (right - left));

        if(height[left] <= height[right]) {
            left++;
        }

        else {
            right--;
        }
    }

    cout<<maxTotal;

        
}




int main() {
    vector<int>height{1,1};
    maxArea(height);
   
}