#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_current = nums[0];
    int max_global = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        max_current = max(nums[i], max_current + nums[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }
    return max_global;
}

int main() {
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Example 1: " << maxSubArray(nums1) << endl; 

    vector<int> nums2 = {1};
    cout << "Example 2: " << maxSubArray(nums2) << endl; 

    vector<int> nums3 = {5, 4, -1, 7, 8};
    cout << "Example 3: " << maxSubArray(nums3) << endl; 

    return 0;
}
