// find largest element in an array
// TC = O(n)    SC = O(1)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {5,1,4,7,6,2,9};
    int n = arr.size();

    int maxEl = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > maxEl){
            maxEl = arr[i];
        }
    }

    cout << maxEl << endl;
    return 0;
}
