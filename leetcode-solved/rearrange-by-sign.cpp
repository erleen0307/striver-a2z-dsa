/*
Leetcode 2149 - Rearrange Array Elements by Sign

Algorithm:
1. Create a result array of size n.
2. Maintain two pointers:
   - posIndex = 0 (for positive numbers)
   - negIndex = 1 (for negative numbers)
3. Traverse the input array:
   - If element is positive, place it at posIndex and move posIndex by 2.
   - If element is negative, place it at negIndex and move negIndex by 2.
4. Return the result array.

Time Complexity: O(n)
Space Complexity: O(n)

Difficulty: Medium
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        
        int posIndex = 0; // first element
        int negIndex = 1;
        vector<int> arr(n,0); // initialised with zero

        for(int x : nums){
            if(x > 0){
                arr[posIndex] = x;
                posIndex += 2;
            } else {
                arr[negIndex] = x;
                negIndex += 2;
            }
        }
        
        return arr;
    }
};
