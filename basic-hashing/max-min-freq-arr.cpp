// find the highest/lowest freq element
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int hash[16] = {0};

    for(int i=0; i<n; i++) {
        hash[arr[i]]++;
    }

    int maxFreq = 0;
    int minFreq = INT_MAX;

    int maxEl = -1;
    int minEl = -1;

    for(int i=0; i<16; i++) {
        if(hash[i] > 0) {

            if(hash[i] > maxFreq) {
                maxFreq = hash[i];
                maxEl = i;
            }

            if(hash[i] < minFreq) {
                minFreq = hash[i];
                minEl = i;
            }
        }
    }

    cout << maxEl << " -> " << maxFreq << endl;
    cout << minEl << " -> " << minFreq << endl;
    return 0;
}
