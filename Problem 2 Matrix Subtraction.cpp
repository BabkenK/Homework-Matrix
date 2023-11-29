#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows for the matrices: ";
    cin >> rows;

    cout << "Enter the number of columns for the matrices: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    cout << "Enter the elements of matrix 1:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of matrix 2:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    // Matrix sub
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "\nSubtraction of the two matrices:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}