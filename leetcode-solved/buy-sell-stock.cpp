/*
Leetcode 121 - Best Time to Buy and Sell Stock

Algorithm:
1. Initialize a variable to store the minimum stock price seen so far.
2. Traverse the array of stock prices.
3. For each price, calculate the profit that would be obtained by selling on the current day.
4. Update the maximum profit if the current profit is greater.
5. Update the minimum stock price if a lower price is found.
6. Return the maximum profit obtained.

Time Complexity: O(n)
Space Complexity: O(1)

Difficulty: Easy
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int minPrice = INT_MAX;
        int currProfit = 0;
        int maxProfit = 0;

        for(int i=0; i<n; i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }

            currProfit = prices[i] - minPrice;

            maxProfit = max(maxProfit, currProfit);
        }

        return maxProfit;
    }
};
