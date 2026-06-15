// remove duplicates from sorted array
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr){
    int n = arr.size();
    
    int i = 0;

    for(int j = 1; j < n; j++){

        // found a new unique element
        if(arr[j] != arr[i]){
            i++;
            // place new unique element
            arr[i] = arr[j];
        }
    }

    // number of unique elements
    return i + 1;
}

int main(){
    vector<int> arr = {0,0,1,1,1,2,3,3,4,5,5,5,6};
    
    int k = removeDuplicates(arr);
    for(int i=0; i<k; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
