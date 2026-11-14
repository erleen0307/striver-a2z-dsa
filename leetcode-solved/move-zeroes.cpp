/*
Leetcode 283 - Move Zeroes

Approach: Two Pointers (Slow and Fast)

Algorithm:
1. Initialise slow pointer i = 0 and fast pointer j = 0.
2. Traverse the array using the fast pointer.
3. Check if nums[j] is non-zero.
4. If non-zero:
   - Swap nums[i] and nums[j].
   - Increment the slow pointer i.
5. If zero, skip the element and continue traversal.
6. Continue until the fast pointer reaches the end of the array.
7. All non-zero elements are moved to the beginning, maintaining their relative order, and zeroes are shifted to the end.

Time Complexity: O(n)
Space Complexity: O(1)
Difficulty: Easy
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; // slow pointer
        int j = 0; // fast pointer

        for(int j = 0; j<nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};
