/*
Leetcode 53 - Maximum Subarray

Algorithm: Kadane's Algorithm
1. Traverse the array while maintaining a running sum.
2. Keep track of the maximum subarray sum encountered.
3. Reset the running sum to 0 whenever it becomes negative.
4. Return the maximum sum.

Time Complexity: O(n)
Space Complexity: O(1)

Difficulty: Medium
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's algorithm
        int n = nums.size();
        
        long long sum = 0;
        long long maxi = LLONG_MIN;

        for(int i=0; i<n; i++){
            sum += nums[i]; 

            if(sum > maxi){
                maxi = sum;
            }

            if(sum < 0){
                sum = 0;
            }
        }

        return maxi;
    }
};
