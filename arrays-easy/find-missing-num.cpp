// find missing number
// TC = O(n^2)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int> &arr){
    int n = arr.size() + 1;

    for(int i=1; i<=n; i++){
        auto it = find(arr.begin(), arr.end(), i);
        if(it == arr.end()){ // if number is missing
            return i;
            break;
        }
    }
    
    return -1; // if all numbers are present
}

int main(){
    vector<int> arr = {1,2,3,4,6};

    int res = findMissingNumber(arr);
    if(res == -1){
        cout << "No element missing!" << endl;
    } else{
        cout << "Missing number: " << res << endl;
    }
    
    return 0;
}
