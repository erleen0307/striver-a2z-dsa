// floor of sorted array -- element that is smaller than or equal to the target
// TC = O(log n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int floorEl(vector<int> &nums, int target){
    int n = nums.size() - 1;
    
    int low = 0;
    int high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] <= target){
            ans = nums[mid]; // possible candidate for floor val
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {2,4,6,8,10};
    int target = 5;

    cout << floorEl(nums, target) << endl;
    return 0;
}
