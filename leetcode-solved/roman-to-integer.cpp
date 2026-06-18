/*
Leetcode 13 - Roman to Integer
Approach: unordered_map
TC: O(n)
SC: O(1)
Difficulty: Easy
*/

class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        
        unordered_map <char, int> ump = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}            
        };

        for(int i=0; i<s.length() - 1; i++){
            if(ump[s[i]] < ump[s[i+1]]){
                res -= ump[s[i]];
            } else{
                res += ump[s[i]];
            }
        }
        res += ump[s.back()];

        return res;
    }
};
