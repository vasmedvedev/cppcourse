#include <iostream>
#include "math.h"

int main() {
    const int rows = 3;
    const int cols = 4;
    unsigned int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 567, 7, 9},
        {9, 10, 100500, 12}
    };

    unsigned int max = NAN;
    int max_row_index = NAN;
    int max_col_index = NAN;

    int max_sum_row = 0;
    int max_sum_col = 0;

    int max_row = 0;
    int max_col = 0;

    for(int row = 0; row < rows; ++row) {
        int sum_row = 0;
        for(int col = 0; col < cols; ++col) {
            sum_row += matrix[row][col];

            if (matrix[row][col] > max) {
                max = matrix[row][col];
                max_row_index = row;
                max_col_index = col;
            }

        }
        if (sum_row > max_sum_row) {
            max_sum_row = sum_row;
            max_row = row;
        }
    }

    for(int col = 0; col < cols; ++col) {
        int sum_col = 0;
        for(int row = 0; row < rows; ++row) {
            sum_col += matrix[row][col];
        }
        if (sum_col > max_sum_col) {
            max_sum_col = sum_col;
            max_col = col;
        }
    }

    std::cout <<  "Max value: " << max << " with indexes: " << max_row_index << ", " << max_col_index << std::endl;
    std::cout << "Max row: " << max_row << ", " << "Max col: " << max_col << std::endl;

    return 0;
}