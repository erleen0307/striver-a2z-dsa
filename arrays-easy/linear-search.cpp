// linear search in cpp
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int num){
    int n = arr.size();
    
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return i;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int num = 3;
    
    int index = linearSearch(arr, num);
    if(index != -1){
        cout << num << " is present at index " << index << endl;
    } else{
        cout << num << " is not present in the array" << endl;
    }
    return 0;
}
