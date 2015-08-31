#include <iostream>
#include "utils.h"

int main() {
    double radius = 15;
    std::cout << "Radius = " << radius << ", area = "
    << area(radius) << ", circumference = " << circumference(radius) << std::endl;
    return 0;
}