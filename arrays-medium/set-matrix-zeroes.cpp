// set matrix zeroes
// TC = O(rows * cols)    SC = O(1)

#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    bool firstRowZero = false;
    bool firstColZero = false;

    // check if first row has any zeroes
    for(int j=0; j<cols; j++){
        if(matrix[0][j] == 0){
            firstRowZero = true;
            break;
        }
    }


    // check if first column has any zeroes
    for(int i=0; i<rows; i++){
        if(matrix[i][0] == 0){
            firstColZero = true;
            break;
        }
    }

    // Mark rows and columns in first row/column
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for(int i=1; i<rows; i++){
        for(int j=1; j<cols; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    // handle first row
    if(firstRowZero){
        for(int j=0; j<cols; j++){
            matrix[0][j] = 0;
        }
    }

    // handle first column
    if(firstColZero){
        for(int i=0; i<rows; i++){
            matrix[i][0] = 0;
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    setZeroes(matrix);
    
    for(const auto &row : matrix){
        for (auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
