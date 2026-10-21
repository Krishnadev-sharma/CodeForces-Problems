/*
Problem: Find Target Indices After Sorting Array (#2089)
LeetCode: https://leetcode.com/problems/find-target-indices-after-sorting-array/
Language: C++
Runtime: 0 ms
Memory: 15.3 MB
Approach: Optimized Single-Pass Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/CodeForces-Problems
*/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target)
            ans.push_back(i);
        }
        return ans;
    }
};