/*
Problem: Sum of Squares of Special Elements  (#2778)
LeetCode: https://leetcode.com/problems/sum-of-squares-of-special-elements/
Language: C++
Runtime: 0 ms
Memory: 39.9 MB
Approach: Optimized Single-Pass Traversal
Author: Krishnadev_sharma
Synced by CodeCrus: https://github.com/Krishnadev-sharma/CodeForces-Problems
*/

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                sum += nums[i-1]*nums[i-1];
            }
        }
        return sum;
    }
};