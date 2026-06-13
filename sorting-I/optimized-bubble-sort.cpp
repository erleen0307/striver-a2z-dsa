// Optimized Bubble Sort
// TC = O(n^2), O(n) best case      SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int passes = 0;

    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }

        }

        passes++;

        if(!swapped) {
            cout << "Array sorted after " << passes << " pass(es)." << endl;
            break;
        }
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/* Why do we use Optimized Bubble Sort? 
If a complete pass causes no swaps, the array is already sorted, 
so there's no reason to continue. */
