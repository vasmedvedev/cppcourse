#include <iostream>

int main() {
    const int first_array_size = 3;
    const int second_array_size = 5;
    const int result_size = first_array_size + second_array_size;

    int array_1[first_array_size] = {2, 4, 3};
    int array_2[second_array_size] = {5, 3, 2, 5, 1};
    int result[result_size];

    int* ptr = result;
    for (int i = 0; i < first_array_size; ++i) {
        *ptr = array_1[i];
        ptr++;  // :-)
    }

    for (int i = 0; i < second_array_size; ++i) {
        *ptr = array_2[i];
        ptr++;
    }

    for (int i = 0; i < result_size; ++i) {
        std::cout << result[i];
    }
    return 0;
}