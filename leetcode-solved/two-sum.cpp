/*
Leetcode 1 - Two Sum

Algorithm:
1. Create a hash map to store numbers and their indices.
2. Traverse the array once.
3. For each element, calculate the required complement:
   complement = target - current element.
4. Check if the complement already exists in the hash map.
5. If it exists, return the indices of the complement and the current element.
6. Otherwise, store the current element and its index in the hash map.
7. Continue until the pair is found.

Time Complexity: O(n)
Space Complexity: O(n)

Difficulty: Easy
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> ump; // to store num and its index
        
        for(int i = 0; i < (int)nums.size(); i++){
            ump[nums[i]] = i; // {num, index}
        }

        for(int i = 0; i < (int)nums.size(); i++){
            int res = target - nums[i];
            if(ump.find(res) != ump.end() && ump[res] != i){
                return {i, ump[res]};
            }
        }
        return {};
    }
};

