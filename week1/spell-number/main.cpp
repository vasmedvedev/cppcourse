#include <iostream>
#include "spelling.h"

int main() {
    int number;
    std::cout << "Enter number between 1 and 999:" << std::endl;
    std::cin >> number;
    std::cout << spell(number);
    return 0;
}