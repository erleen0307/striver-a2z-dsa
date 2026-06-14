// recursive bubble sort
// TC = O(n^2)  SC = O(n)

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n){

    if(n == 1){
        return;
    }

    for(int i = 0; i < n-1; i++){

        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

int main(){

    vector<int> arr = {5,4,8,3,2};

    bubbleSort(arr, arr.size());

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}
