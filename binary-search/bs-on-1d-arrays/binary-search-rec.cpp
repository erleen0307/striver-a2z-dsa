// Binary Search - Recursive method (assuming array contains no duplicates)
// TC = O(logN)    SC = O(logN) because of recursion stack

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int low, int high, int target){
    //base case - if target not found
    if(low > high){
        return -1;
    }

    int mid = low + (high - low)/2;

    if(nums[mid] == target){ // if target found
        return mid;
    } else if(nums[mid] < target){ // if target is on right
        return binarySearch(nums, mid+1, high, target);
    } else { // if target is on left
        return binarySearch(nums, low, mid-1, target);
    }
}

int main(){
    vector<int> nums = {1,3,4,5,6,8,9,11};
    int target = 3;

    cout << binarySearch(nums, 0, nums.size()-1, target) << endl;
    return 0;
}
