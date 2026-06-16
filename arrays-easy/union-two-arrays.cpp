// union of two sorted arrays
// TC = o(n+m)      SC = O(n+m)

#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &arr1, vector<int> &arr2, int n, int m){
    vector<int> temp;
    // inital two pointers
    int i = 0, j = 0;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){ // if arr1 has smaller element
            if(temp.empty() || temp.back() != arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        } else if(arr1[i] > arr2[j]){ // if arr2 has smaller element
            if(temp.empty() || temp.back() != arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        } else{ // if both elements are equal
            if(temp.empty() || temp.back() != arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // add remaining elements of arr1 to temp
    while(i<n){
        if(temp.empty() || temp.back() != arr1[i]){
            temp.push_back(arr1[i]);
            i++;
        }
    }

    // add remaining elements of arr2 to temp
    while(j<m){
        if(temp.empty() || temp.back() != arr2[j]){
            temp.push_back(arr2[j]);
            j++;
        }
    }

    return temp;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {4,5,6,7,8,9};

    int n = arr1.size();
    int m = arr2.size();

    vector<int> result = findUnion(arr1, arr2, n, m);
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}
