#include <iostream>
#include <vector>

// Function to transpose a matrix
std::vector<std::vector<int>> transposeMatrix(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Initialize the transposed matrix with zeros
    std::vector<std::vector<int>> transposed(cols, std::vector<int>(rows, 0));

    // Perform matrix transposition
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}

// Function to display a matrix
void displayMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example matrix
    std::vector<std::vector<int>> originalMatrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Perform matrix transposition
    std::vector<std::vector<int>> transposedMatrix = transposeMatrix(originalMatrix);

    // Display the original and transposed matrices
    std::cout << "Original Matrix:" << std::endl;
    displayMatrix(originalMatrix);

    std::cout << "\nTransposed Matrix:" << std::endl;
    displayMatrix(transposedMatrix);

    return 0;
}
