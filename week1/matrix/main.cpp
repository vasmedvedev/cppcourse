#include <iostream>
#include "math.h"

int main() {
    const int rows = 3;
    const int cols = 4;
    unsigned int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 567, 7, 8},
        {9, 10, 11, 12}
    };

    unsigned int max = NAN;
    int max_row_index = NAN;
    int max_col_index = NAN;

    int max_sum_row = NAN;
    int max_sum_col = NAN;

    for(int row = 0; row < rows; ++row) {
        for(int col = 0; col < cols; ++col) {
            int sum_row = 0;
            sum_row += matrix[row][col];

            if (matrix[row][col] > max) {
                max = matrix[row][col];
                max_row_index = row;
                max_col_index = col;
            }
            if (sum_row > max_sum_row) {
                max_sum_row = row;
            }
        }
    }

    for(int col = 0; col < cols; ++col) {
        for(int row = 0; row < rows; ++row) {
            int sum_col = 0;
            sum_col += matrix[row][col];

            if (sum_col > max_sum_col) {
                max_sum_col = col;
            }
        }
    }

    std::cout <<  "Max value: " << max << " with indexes: " << max_row_index << ", " << max_col_index << std::endl;
    std::cout << "Max row: " << max_sum_row << ", " << "Max col: " << max_sum_col << std::endl;

    return 0;
}