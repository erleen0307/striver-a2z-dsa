// rotate square matrix clockwise by 90 degrees
// TC = O(n^2)  SC = O(1)
// transpose matrix, then reverse each row

#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix){
    int n = matrix.size(); // square matrix

    // transpose of matrix
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotateMatrix(matrix);

    for(const auto &row : matrix){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
