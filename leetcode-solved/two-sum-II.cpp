/*
Leetcode 167 - Two Sum II: Input Array Is Sorted

Algorithm:
1. Initialize two pointers: left at the beginning and right at the end of the sorted array.
2. Traverse the array while left is less than right.
3. Calculate the sum of the elements at both pointers.
4. If the sum is greater than the target, decrement right to decrease the sum.
5. If the sum is smaller than the target, increment left to increase the sum.
6. If the sum equals the target, store both indices (using 1-based indexing) and return them.

Time Complexity: O(n)
Space Complexity: O(1)

Difficulty: Medium
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indexes;
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right){
            if(numbers[left] + numbers[right] > target){
                right--;
            } else if(numbers[left] + numbers[right] < target) {
                left++;
            } else {
                indexes.push_back(left+1);
                indexes.push_back(right+1);
                break;
            }
        }

        return indexes;
    }
};
