// pascal triangle III
// generate entire pascal triangle for n rows
// TC = O(n^2)  SC = O(n^2)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;

    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row);
    }
    return triangle;
}


int main() {
    int n = 5;

    vector<vector<int>> result = generate(n);

    for (auto &row : result) {
        for (auto &val : row) cout << val << " ";
        cout << endl;
    }
}
