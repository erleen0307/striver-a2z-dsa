// Insertion sort
// TC = O(n^2), O(n) best case    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 3, 4, 1};
    int n = sizeof(arr) /  sizeof(arr[0]);

    for(int i = 1; i < n; i++) {

        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j], arr[j-1]);
            j--;
        }

    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
