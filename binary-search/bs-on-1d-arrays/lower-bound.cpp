// Lower Bound - index of element that is greater than or equal to target
// TC = O(logN)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &nums, int target){
    int n = nums.size();

    int low = 0;
    int high = n - 1;
    
    int ans = n; // intial assumption

    while(low <= high){
        int mid = low + (high - low)/2;
        
        if(nums[mid] == target){ // if same number found
            return mid;
        } else if (nums[mid] >= target){ // if distinct lower bound
            ans = mid;
            high = mid - 1;
        } else { // if not found yet, move on
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {1,3,5,7,9};
    int target = 6;

    cout << lowerBound(nums, target) << endl;
    return 0;
}

// NOTE: STL already provides lower_bound() 
