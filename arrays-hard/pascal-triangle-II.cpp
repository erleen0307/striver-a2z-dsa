// Pascal Triangle II
// Print the Nth row of Pascal's Triangle
// TC = O(n)
// SC = O(n)

#include <bits/stdc++.h>
using namespace std;

vector<long long> pascalII(int n) {
    vector<long long> res;

    long long curr = 1;
    res.push_back(curr);      // First element is always 1

    int N = n - 1;            // Combination row index

    for (int k = 0; k < N; k++) {
        curr = curr * (N - k);
        curr = curr / (k + 1);

        res.push_back(curr);
    }

    return res;
}

int main() {
    int n = 5;

    vector<long long> ans = pascalII(n);

    for (long long x : ans) {
        cout << x << " ";
    }

    return 0;
}
