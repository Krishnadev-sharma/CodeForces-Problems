/*
Problem: Subarrays Distinct Element Sum of Squares I (#2913)
LeetCode: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
Language: C++
Runtime: 43 ms
Memory: 36.3 MB
Approach: Optimized Single-Pass Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/CodeForces-Problems
*/

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, count = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<int> distElement;
            for (int j = i; j < n; j++) {
                distElement.insert(nums[j]);
                count = distElement.size();
                sum += count * count;
            }
        }
        return sum;
    }
};