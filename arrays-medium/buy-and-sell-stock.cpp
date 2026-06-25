// Buy and sell stock 
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

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

int main(){
    vector<int> prices = {7,1,5,3,6,4};

    Solution sol;
    int res = sol.maxProfit(prices);

    cout << res << endl;
    return 0;
}
