// leaders in an array (rightmost element and all elements greater than those on the right)
// TC = O(n)   SC = O(n)   AS = o(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &nums){
    int n = nums.size();
    
    vector<int> res;

    int leader = nums[n-1];
    res.push_back(leader);


    int maxRight = nums[n-1]; 
    for(int i=n-2; i>=0; i--){
        if(nums[i] > maxRight){
            maxRight = nums[i];
            res.push_back(maxRight);
        }
    }

    reverse(res.begin(), res.end());
    return res;
}

int main(){
    vector<int> nums = {10, 22, 12, 3, 0, 6};

    vector<int> res = leaders(nums);
    for(int x : res){
        cout << x << " ";
    }

    return 0;
}
