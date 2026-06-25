// Rearrange elements with alternate signs, keeping relative order same
// TC = O(n)    SC = O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> arrangeBySign(vector<int> &arr, int n){
    int posIndex = 0; // initial element must be positive
    int negIndex = 1;

    vector<int> nums(n,0); // resultant array with length = n, initialised to zero

    for(int x : arr){
        if(x > 0){
            nums[posIndex] = x;
            posIndex += 2; // alternate elements
        } else if(x < 0){
            nums[negIndex] = x;
            negIndex += 2;
        }
    }
    return nums;
}

int main(){
    vector<int> arr = {1,2,-4,-5};
    int n = arr.size();

    vector<int> res = arrangeBySign(arr, n);
    for(int x : res){
        cout << x << " ";
    }

    return 0;
}
