/*
Leetcode 75 - Sort Colors

Algorithm: DNF (Dutch National Flag) Algorithm
1. Maintain three pointers: low, mid, and high.
2. Traverse the array using the mid pointer.
3. If nums[mid] == 0, swap it with nums[low] and move both low and mid forward.
4. If nums[mid] == 1, it is already in the correct position, so move mid forward.
5. If nums[mid] == 2, swap it with nums[high] and move high backward.
6. Continue until mid crosses high.

Time Complexity: O(n)
Space Complexity: O(1)

Difficulty: Medium
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // DNF Algorithm
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;

        while(mid <= high){ 
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if(nums[mid] == 1){
                mid++;
            } else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
