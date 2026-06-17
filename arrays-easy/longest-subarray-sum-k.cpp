// longest subarray with given sum k (positives)
// TC = O(n)   SC = O(1)
#include <bits/stdc++.h>
using namespace std;


// Function to find the length of longest subarray having sum k
int longestSubarray(vector<int> &arr, int k){
    int n = arr.size();
        
    // To store the maximum length of the subarray
    int maxLen = 0;
        
    // Pointers to mark the start and end of window
    int left = 0, right = 0;
        
    // To store the sum of elements in the window
    int sum = arr[0];
        
    // Traverse all the elements
    while(right < n) {        
        // If the sum exceeds K, shrink the window
        while(left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
            
        // store the maximum length
        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
            
        right++;
        if(right < n) sum += arr[right];
    }
        
    return maxLen;
}

int main() {
	vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    
	int ans = longestSubarray(nums, k);
	cout << "The length of longest subarray having sum k is: " << ans;

	return 0;
}
