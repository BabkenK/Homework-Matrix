#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;

    cout << "Enter the number of columns for the matrix: ";
    cin >> cols;

    int matrix[rows][cols], transposedMatrix[cols][rows];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Transpose the matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    cout << "\nTransposed Matrix:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transposedMatrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}