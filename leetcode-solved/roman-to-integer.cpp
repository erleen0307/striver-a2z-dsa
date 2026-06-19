/*
Leetcode 13 - Roman to Integer

Algorithm:
1. Store the value of each Roman numeral in an unordered_map.
2. Traverse the string from left to right.
3. If the current numeral is smaller than the next numeral,
   subtract its value from the answer.
4. Otherwise, add its value to the answer.
5. Return the final integer value.

Time Complexity: O(n)
Space Complexity: O(1)

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
