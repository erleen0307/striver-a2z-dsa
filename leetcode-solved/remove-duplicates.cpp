/*
Leetcode 26 - Remove Duplicates from Sorted Array

Algorithm:
1. Initialise slow pointer i = 0 and fast pointer j = 1.
2. Traverse the array using the fast pointer.
3. Compare nums[i] with nums[j].
4. If both elements are different:
   - Increment the slow pointer i.
   - Copy nums[j] to nums[i].
5. If both elements are equal, skip the duplicate.
6. Continue until the fast pointer reaches the end of the array.
7. Return i + 1 as the count of unique elements.

Time Complexity: O(n)
Space Complexity: O(1)
Difficulty: Easy
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0; // slow pointer
        int j = 1; // fast pointer
        
        for(int j=1; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }

        return i+1;
    }
};
