// longest consecutive sequence in an array
// TC = O(n)    SC = O(n)

#include <bits/stdc++.h>
using namespace std;

int longestSeq(vector<int> &nums){
    int n = nums.size();
    unordered_set<int> ust;

    // put all elements in hash
    for(int i=0; i<n; i++){
        ust.insert(nums[i]);
    }

    int longest = 1;
    int length = 0;
    for(int i=0; i<n; i++){
        int current = nums[i];

        // if previous number does not exist, start sequence from ith term
        if(ust.find(current-1) == ust.end()){
            length = 1;

            // as long as next consecutive number exists
            while(ust.find(current+1) != ust.end()){
                current++;
                length++;
            }
        }
        longest = max(length, longest);
    }

    return longest;
}

int main(){
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    
    int res = longestSeq(nums);
    cout << res << endl;
    
    return 0;
}
