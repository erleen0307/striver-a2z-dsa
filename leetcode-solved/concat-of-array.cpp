/*
Leetcode 1929 - Concatenation of Array

Algorithm:
1. Create a new array of size 2 * n.
2. Traverse the original array.
3. Store each element at index i and again at index i + n.
4. Return the new array.

Time Complexity: O(n)
Space Complexity: O(n)

Difficulty: Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n, 0);
        
        for(int i=0; i<n; i++){
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }

        return ans;
    }
};

int main(){
    vector<int> nums = {1,3,2,1};
    
    Solution sol;
    vector<int> res = sol.getConcatenation(nums);

    for(int x : res){
        cout << x << " ";
    }
    
    return 0;
}
