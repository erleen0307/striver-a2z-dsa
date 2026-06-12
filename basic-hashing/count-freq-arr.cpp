// count frequency of each element (using array)
// TC = O(n)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = 6;
    
    int hash[16] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i = 0; i < 16; i++) {
        if(hash[i] > 0) {
            cout << i << " -> " << hash[i] << endl;
        }
    }
    
    return 0;
}
