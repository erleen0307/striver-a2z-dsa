/* Count occurrences of X in sorted array

1 2 |4 4 4 4 4| 6 8
    ^         ^
 first      last

range = last - first + 1

TC = O(log n)   SC = O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int countOcc(vector<int> &nums, int target){
    int n = nums.size();
    int low = 0, high = n-1;

    int last = -1, first = -1;

    // To find first occurrence
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            first = mid;
            high = mid - 1;
        } else if (nums[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0; high = n-1;

    // To find last occurrence
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target){
            last = mid;
            low = mid + 1;
        } else if (nums[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return (last - first + 1);
}

int main(){
    vector<int> nums = {1,2,4,4,4,4,4,6,8};
    int target = 4;

    cout << countOcc(nums, target);
    return 0;
}
