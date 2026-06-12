// Bubble sort
// TC = O(n^2) average case, O(n) best case     SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n-1; i++) {

        // comparing adjacent elements only
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
