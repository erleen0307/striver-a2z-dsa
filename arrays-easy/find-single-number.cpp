/*
Given a non-empty array of integers arr, 
every element appears twice except for one. 
Find that single one.
*/

#include <bits/stdc++.h>
using namespace std;

    // Function to find the single non-repeating element using XOR
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();
        int xorr = 0;

        // XOR all elements. Duplicates cancel out, leaving the single element.
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ arr[i];
        }

        return xorr;
    }


int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    int ans = getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}

/*
Basic idea of XOR
1. a ^ a = 0
2. a ^ 0 = a
3. a ^ b = b ^ a
*/
