#include <iostream>

bool only_one_is_even(int a, int b) {
    return (a % 2) + (b % 2) == 1;
}

int main() {
    int a = 32;
    int b = 91;
    std::cout << only_one_is_even(a, b) << std::endl;
    return 0;
}