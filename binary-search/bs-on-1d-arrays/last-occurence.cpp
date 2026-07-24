// Last occurence of an element
// TC = O(log n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int lastIndex(vector<int> &nums, int target){
    int n = nums.size();
    
    int low = 0;
    int high = n - 1;

    int ans = -1; // no index found yet

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            ans = mid; // possible value of last occurence
            low = mid + 1; // extend the range to check more possible values
        } else if (nums[mid] > target){
            high = mid - 1; // shift to left
        } else {
            low = mid + 1; // shift to right
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {1,2,2,2,3,4,5,6};
    int target = 2;

    cout << lastIndex(nums, target) << endl;
    return 0;
}
