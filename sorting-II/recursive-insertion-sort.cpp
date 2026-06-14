// recursive insertion sort
// TC = O(n^2), O(n) - best case
// SC = O(n)

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int n){

    if(n <= 1){
        return;
    }

    insertionSort(arr, n-1);

    int last = arr[n-1];
    int j = n-2;

    while(j >= 0 && arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;
}

int main(){

    vector<int> arr = {5,4,8,3,2};

    insertionSort(arr, arr.size());

    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
