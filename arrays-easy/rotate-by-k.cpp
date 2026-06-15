// left rotate array by k elements
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

// Helper function to reverse a subarray from index start to end
void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate array left or right by k steps
vector<int> rotateArray(vector<int>& arr, int k, string direction) {
    int n = arr.size();
    // Edge case: empty or no rotation
    if (n == 0 || k == 0) return arr;

    // Normalize k
    k = k % n;

    if (direction == "right") {
        // Step 1: Reverse the whole array
        reverseArray(arr, 0, n - 1);

        // Step 2: Reverse first k elements
        reverseArray(arr, 0, k - 1);

        // Step 3: Reverse remaining n-k elements
        reverseArray(arr, k, n - 1);
    } 
    else if (direction == "left") {
        // Step 1: Reverse first k elements
        reverseArray(arr, 0, k - 1);

        // Step 2: Reverse remaining n-k elements
        reverseArray(arr, k, n - 1);

        // Step 3: Reverse the whole array
        reverseArray(arr, 0, n - 1);
    }

    return arr;
}

// Driver code
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 2;
    string dir = "right";

    vector<int> result = rotateArray(arr, k, dir);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}


/*
Concept applied: REVERSAL ALGORITHM

1 2 3 4 5 6
k = 2
[1 2] [3 4 5 6]
- reverse each
[2 1] [6 5 4 3]
2 1 6 5 4 3
- reverse the whole array
3 4 5 6 1 2
- done! left rotation by k

1 2 3 4 5 6
- reverse whole array
6 5 4 3 2 1
k = 2
[6 5] [4 3 2 1]
- reverse each
[5 6] [1 2 3 4]
5 6 1 2 3 4
- done! right rotation by k
*/
