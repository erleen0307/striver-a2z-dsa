/*
Problem: Two Sum
Approach: Hash Map
TC: O(n)
SC: O(n)
Difficulty: Easy
*/

// optimal sol - using hashing 
// brute force - use nested loops

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
