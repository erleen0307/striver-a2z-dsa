// find the second smallest and second largest element in an array
// TC = O(n)      SC = O(1)

#include<bits/stdc++.h>
using namespace std;

// Function to find the second smallest element in the array
int secondSmallest(int arr[], int n) {
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;

    int small = INT_MAX;
    int second_small = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        } 
        else if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return second_small; // Return the second smallest element
}

// Function to find the second largest element in the array
int secondLargest(int arr[], int n) {
    // Edge case: if the array has fewer than 2 elements
    if (n < 2)
        return -1;

    int large = INT_MIN, second_large = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } 
        else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large; // Return the second largest element
}

int main() {
    int arr[] = {1, 2, 4, 7, 7, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondSmall = secondSmallest(arr, n);
    int secondLarge = secondLargest(arr, n);

    cout << "Second smallest is " << secondSmall << endl;
    cout << "Second largest is " << secondLarge << endl;

    return 0;
}
