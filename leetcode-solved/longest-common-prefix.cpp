/*
Leetcode 14 - Longest Common Prefix

Approach:
Take the first string as the current prefix.
Compare it with every other string character by character.
For each comparison, build a temporary common prefix.
Update the prefix with this temporary result.
The prefix keeps shrinking until it becomes the longest common prefix of all strings.

TC: O(n * m)
    n = number of strings
    m = length of the shortest string

SC: O(m)
    Temporary string used to store the common prefix

Difficulty: Easy
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string res = "";

        string first = strs[0];
        string last = strs.back();

        int n = min(first.length(), last.length());
        for(int i=0; i<n; i++){
            if(first[i] == last[i]){
                res += first[i];
            } else {
                break;
            }
        }

        return res;
    }
};
