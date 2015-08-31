#include <iostream>
#include "utils.h"

int main() {
    double a_x, a_y;
    a_x = 1;
    a_y = 1;

    double b_x, b_y;
    b_x = 3,
    b_y = 2;

    std::cout << "Distance = " << distance(a_x, a_y, b_x, b_y) << std::endl;
    return 0;
}