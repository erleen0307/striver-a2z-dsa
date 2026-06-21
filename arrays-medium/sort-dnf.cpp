// sort an array of 0s, 1s and 2s 
// dutch national flag algorithm - three pointers method
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> sortArr(vector<int> &nums){
    int n = nums.size();
    int low = 0, mid = 0, high = n-1;

    while(mid<=high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1){
            mid++;
        } else if(nums[mid] == 2){
            swap(nums[mid], nums[high]);
            high--;
            // don't do mid++ since we haven't checked the mid pos after swapping yet
        }
    }

    return nums;
}

int main(){
    vector<int> nums = {1,0,2,1,0};
    
    vector<int> res = sortArr(nums);
    for(int x : res){
        cout << x << " ";
    }

    return 0;
}

//  | 0s region  | 1s region    | unknown region | 2s region     |
//  | 0 to low-1 | low to mid-1 | mid to high    | high+1 to n-1 |
