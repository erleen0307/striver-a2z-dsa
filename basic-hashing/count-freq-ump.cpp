// count frequency of each element using unordered_map
// TC = O(n)    SC = O(n)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = 6;
    
    unordered_map <int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto x : mp){
        cout << x.first << " -> " << x.second << endl;
    }
    
    return 0;
}
