// find the majority element that occurs more than n/2 times
// Moore's majority vote algorithm
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums){
    int n = nums.size();

    int el;
    int cnt = 0;

    // First pass: finding majority element (not guaranteed)
    // Actual Moore's voting algorithm
    for(int i=0; i<n; i++){
        if(cnt == 0){ // find a new candidate
            cnt = 1;
            el = nums[i];
        } else if(nums[i] == el){ // supporter found! 
            cnt++;
        } else { // opponent found!
            cnt--;
        }
    }

    // Second pass: checking if majority decision is correct
    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(nums[i] == el){
            cnt1++;
        }
    }

    if(cnt1 > n/2){
        return el;
    }

    return -1; // if not found
}

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int res = majorityElement(nums);
    cout << "Majority element: " << res << endl;
    return 0;
}
