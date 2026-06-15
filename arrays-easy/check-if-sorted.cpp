// check if an array is sorted
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

bool checkSort(vector<int> &arr, int n){
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();

    bool isSorted = checkSort(arr, n);
    if(isSorted){
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }

    return 0;
}
