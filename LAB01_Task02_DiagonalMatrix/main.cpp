#include <iostream>
#include <vector>
using namespace std;

bool isDiagonalMatrix(const vector<vector<int>>& matrix, int size) {
    for (int row = 0; row < size; ++row) {
        for (int column = 0; column < size; ++column) {
            if (row != column && matrix[row][column] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int size;

    cout << "Enter the size of the square matrix: ";
    cin >> size;

    if (size <= 0) {
        cout << "Matrix size must be greater than zero.\n";
        return 1;
    }

    vector<vector<int>> matrix(size, vector<int>(size));

    cout << "Enter the matrix elements row by row:\n";
    for (int row = 0; row < size; ++row) {
        for (int column = 0; column < size; ++column) {
            cin >> matrix[row][column];
        }
    }

    cout << "\nEntered matrix:\n";
    for (const auto& row : matrix) {
        for (int value : row) cout << value << '\t';
        cout << '\n';
    }

    if (isDiagonalMatrix(matrix, size)) {
        cout << "The matrix is a diagonal matrix.\n";
    } else {
        cout << "The matrix is NOT a diagonal matrix.\n";
    }

    return 0;
}