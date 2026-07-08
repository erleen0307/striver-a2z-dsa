// Upper Bound - index of element that is strictly greater than target
// TC = O(logN)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &nums, int target){
    int n = nums.size();

    int low = 0;
    int high = n - 1;
    
    int ans = n; // intial assumption

    while(low <= high){
        int mid = low + (high - low)/2;
        
        if (nums[mid] > target){ // if upper bound found
            ans = mid;
            high = mid - 1;
        } else { // if not found yet, move on
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,2,2,3,5};
    int target = 2;

    cout << upperBound(nums, target) << endl;
    return 0;
}

// NOTE: STL already provides upper_bound() 
