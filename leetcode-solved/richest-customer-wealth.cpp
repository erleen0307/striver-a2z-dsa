/*
Leetcode 1672 - Richest Customer Wealth

Algorithm:
1. Initialize a variable to store the maximum wealth.
2. Traverse each customer's accounts (each row of the 2D array).
3. Calculate the total wealth of the current customer by summing all bank balances.
4. Update the maximum wealth if the current customer's wealth is greater.
5. Return the maximum wealth.

Time Complexity: O(m × n)
Space Complexity: O(1)

Difficulty: Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();

        int maxWealth = 0;
        int currWealth = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                currWealth += accounts[i][j];
            }
            maxWealth = max(currWealth, maxWealth);
            currWealth = 0; // reset current wealth 
        }

        return maxWealth;

    }
};

int main(){
    vector<vector<int>> accounts = {
        {1,5},
        {7,3},
        {3,5}
    };

    Solution sol;
    int res = sol.maximumWealth(accounts);
    cout << res << endl;
    
    return 0;
}
