// find next permutation
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &arr, int n) {
    int pivot = -1;

    // Step 1: find pivot
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            pivot = i;
            break;
        }
    }

    // Step 2: if no pivot, reverse whole array
    if (pivot == -1) {
        reverse(arr.begin(), arr.end());
        return arr;
    }

    // Step 3: find next greater element in suffix
    for (int i = n - 1; i > pivot; i--) {
        if (arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // Step 4: reverse suffix
    reverse(arr.begin() + pivot + 1, arr.end());

    return arr;
}

int main() {
    vector<int> arr = {1, 3, 2};
    int n = arr.size();

    vector<int> res = nextPermutation(arr, n);
    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}
