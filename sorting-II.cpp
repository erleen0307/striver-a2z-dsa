// merge sort
// TC = O(n logn)   SC = O(n)

#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& arr, int start, int end){
    if(start <= end){
        return;
    } // stop splitting if we reach a single element
    
    int mid = (start + end) / 2;
    
    mergeSort(arr, start, mid); // call to split left half further
    mergeSort(arr, mid+1, end); // call to split right half further

    merge(arr, start, mid, end);
}

void merge(vector<int>& arr, int start, int mid, int end){
    vector<int> temp;

    int left = start;
    int right = mid+1;
    
    while(left<=mid && right<=end){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    // to traverse all elements of left and store in temp
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    // to traverse all elements of right and store in temp
    while(right <= end){
        temp.push_back(arr[right]);
        right++;
    }

    // to send the sorted elements back to arr
    for(int i=start; i<=end; i++){
        arr[i] = temp[i-start];
    }
}

int main(){
    vector<int> arr = {5,3,4,1};

    mergeSort(arr, 0, arr.size()-1);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
