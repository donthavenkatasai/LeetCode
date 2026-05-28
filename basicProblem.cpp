#include<bits/stdc++.h>
using namespace std;

// LeetCode Problem: Two Sum
// Find two numbers that add up to target
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    
    cout << "Input: nums = [2, 7, 11, 15], target = 9" << endl;
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;
    cout << "Explanation: nums[0] + nums[1] = 2 + 7 = 9" << endl;
    
    return 0;
}