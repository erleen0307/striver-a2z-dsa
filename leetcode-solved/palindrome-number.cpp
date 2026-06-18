/*
Leetcode 9 - Palindrome Number
Approach: Reverse the number and compare with original
TC: O(log n)
SC: O(1)
Difficulty: Easy
*/

class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0; // to handle overflows
        int original = x;

        while(x>0){
            int rem = x%10;
            rev = rev*10 + rem; 
            x/=10;
        }

        // for negative numbers
        if(original < 0){
            return false;
        }

        // for positive numbers
        if(original == rev){
            return true;
        } else {
            return false;
        } 
    }
};
