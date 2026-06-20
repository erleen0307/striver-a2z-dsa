// Two Sum: Check if a pair with given sum exists in array
// TC = O(NlogN)   SC = O(N)
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int target){
	vector<pair<int,int>> numsIndex;
	int n = arr.size();

	for(int i=0; i<n; i++){
		numsIndex.push_back({arr[i], i}); // element, index
	}

	sort(numsIndex.begin(), numsIndex.end());

	// two pointers
	int left = 0;
	int right = n-1;

	while(left < right){
		int sum = numsIndex[left].first + numsIndex[right].first;

		if(sum == target){ // pair found!
			return {numsIndex[left].second, numsIndex[right].second}; // indices returned
		} else if (sum < target){
			left++; // target must be to the right of current position (sum < target)
		} else {
			right--; // target must be to the left of current position (sum > target)
		}
	}

	return {-1,-1}; // if no pair found
}

int main(){
	vector<int> arr = {2,6,5,8,11};
	int target = 14;

	vector<int> res = twoSum(arr, target);
	cout << "Indices: " << res[0] << " " << res[1] << endl;
	return 0;
}
