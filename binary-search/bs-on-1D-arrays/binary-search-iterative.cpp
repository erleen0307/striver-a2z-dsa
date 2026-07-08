// Binary Search - Iterative method
// TC = O(logN)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int target){
    int low = 0;
    int high = nums.size() - 1;
    
    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == target){ // if target found
            return mid;
        } else if (nums[mid] < target){ // if target is on right
            low = mid + 1;
        } else { // if target is on left 
            high = mid - 1;
        }
    }

    return -1; // if target not found
}

int main(){
    vector<int> nums = {1,3,4,5,6,8,9,11};
    int target = 3;

    cout << binarySearch(nums, target) << endl;
    return 0;
}
