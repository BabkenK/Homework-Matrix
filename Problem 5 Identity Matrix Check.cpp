#include <iostream>

bool isIdentityMatrix(int matrix[10][10], int n) {
    // Check if the matrix is square
    for (int i = 0; i < n; ++i) {
        if (n != sizeof(matrix[i]) / sizeof(matrix[i][0])) {
            return false; // Not a square matrix
        }
    }

    // Check the diagonal elements for ones and non-diagonal elements for zeros
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return false; // Not an identity matrix
            }
        }
    }

    return true; // Matrix is an identity matrix
}

int main() {
    int n;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    int matrix[10][10];

    // Input matrix elements
    std::cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Check if the matrix is an identity matrix
    if (isIdentityMatrix(matrix, n)) {
        std::cout << "The given matrix is an identity matrix.\n";
    } else {
        std::cout << "The given matrix is not an identity matrix.\n";
    }

    return 0;
}