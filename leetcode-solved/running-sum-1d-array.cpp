/*
Leetcode 1480 - Running Sum of 1d Array

Algorithm:
1. Traverse the array starting from index 1.
2. Add the previous element to the current element.
3. Store the updated value back in the current index.
4. Return the modified array.

Time Complexity: O(n)
Space Complexity: O(1)

Difficulty: Easy
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        int sum = 0;
        
        for(int i=0; i<n; i++){
            sum += nums[i];
            ans.push_back(sum);
        }

        return ans;
    }
};
