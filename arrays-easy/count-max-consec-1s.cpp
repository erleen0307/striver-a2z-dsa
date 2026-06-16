// count max consecutive 1s in the array
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

// Function to find maximum consecutive 1's in an array
int findMaxConsecutiveOnes(vector<int> &nums) {
    // length of the current streak of 1's
    int cnt = 0;
        
    // longest streak of 1's seen so far
    int maxi = 0;

    for (int i = 0; i < nums.size(); i++) {
        // If current element is 1, increment count    
        if (nums[i] == 1) {
            cnt++;
        } else {
            // If element is 0, reset count
            cnt = 0;
        }

        // Update maximum if current count is greater
        maxi = max(maxi, cnt);
    }

    // Return maximum consecutive 1's
    return maxi;
}


int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int ans = findMaxConsecutiveOnes(nums);
    
    cout << "The maximum consecutive 1's are " << ans;
    return 0;
}
