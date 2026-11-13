/*
Leetcode 125 - Valid Palindrome

Algorithm:
1. Initialize two pointers: left at the beginning and right at the end of the string.
2. Traverse the string while left is less than right.
3. Skip non-alphanumeric characters from both ends using isalnum().
4. Convert both characters to lowercase using tolower() and compare them.
5. If the characters match, move left forward and right backward.
6. If the characters don't match, return false.
7. If all characters are successfully compared, return true.

Time Complexity: O(n)
Space Complexity: O(1)

Difficulty: Easy
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        bool flag = true;

        while(left < right){
            if(!isalnum(s[left])){
                left++;
                continue;
            }

            if(!isalnum(s[right])){
                right--;
                continue;
            }

            // Two pointers going in opposite directions
            if(tolower(s[left]) == tolower(s[right])){
                left++;
                right--;
            } else {
                flag = false;
                break;
            }
        }

        return flag;
    }
};
