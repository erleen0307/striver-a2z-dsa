// find the highest/lowest freq element using unordered_map
// TC = O(n)    SC = O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    int minFreq = INT_MAX;

    int maxEl = -1;
    int minEl = -1;

    for(auto it : mp) {

        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxEl = it.first;
        }

        if(it.second < minFreq) {
            minFreq = it.second;
            minEl = it.first;
        }
    }

    cout << maxEl << " -> " << maxFreq << endl;
    cout << minEl << " -> " << minFreq << endl;

    return 0;
}
