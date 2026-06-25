/*
Leetcode 169 - Majority Element

Algorithm: Moore's Majority Voting Algorithm
1. Initialize a candidate element and a count variable.
2. Traverse the array.
3. If count becomes 0, choose the current element as the new candidate.
4. If the current element matches the candidate, increment the count.
5. Otherwise, decrement the count.
6. After the traversal, the candidate will be the majority element.
7. Return the candidate.

Time Complexity: O(n)
Space Complexity: O(1)

Difficulty: Easy
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        int cnt = 0;
        int el;   

        for(int i=0; i<n; i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i]; // select new candidate
            } else if (el == nums[i]){
                cnt++; // supporter arrives
            } else{
                cnt--; // opponent arrives
            }
        }

        return el;
    }
};
