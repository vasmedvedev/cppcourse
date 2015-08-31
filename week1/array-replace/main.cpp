#include <iostream>

int main() {
    int arr[10] = {1, 2, 3, -5, 1, -6, 6, -8, 4, 2};

    for (int i = 0; i < 10; ++i) {
        if (arr[i] >= 0) {
            arr[i] = -arr[i];
        } else {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
