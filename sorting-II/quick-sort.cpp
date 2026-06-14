// quick sort
// TC = O(n logn), O(n^2) - worst case (when pivot is smallest or last element)
// SC = O(logn), O(n) - worst case

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int start, int end){
    int pivot = arr[end];
    int i = start;

    for(int j = start; j < end; j++){
        if(arr[j] < pivot){
            swap(arr[i], arr[j]); // swap to left of pivot
            i++;
        }
    }

    swap(arr[i], arr[end]); // place pivot at correct position
    return i;
}

void quickSort(vector<int>& arr, int start, int end){
    if(start >= end){
        return;
    }
        
    int pIndex = partition(arr, start, end);

    quickSort(arr, start, pIndex - 1); // left of pivot
    quickSort(arr, pIndex + 1, end); // right of pivot

}

int main(){
    vector<int> arr = {5,4,8,3,2};
    quickSort(arr, 0, arr.size()-1);

    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
