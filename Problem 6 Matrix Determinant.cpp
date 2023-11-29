#include <iostream>

int calculateDeterminant(int matrix[2][2]) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

int main() {
    int matrix[2][2];

    std::cout << "Enter the elements of the 2x2 matrix:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
            std::cin >> matrix[i][j];
        }
    }

    int determinant = calculateDeterminant(matrix);

    std::cout << "Determinant of the matrix is: " << determinant << "\n";

    return 0;
}