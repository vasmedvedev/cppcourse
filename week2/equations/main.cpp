#include <iostream>
#include "math.h"

double discriminant(int a, int b, int c) {
    return pow(b, 2) - 4 * a * c;
}

struct Roots {
    double first_root;
    double second_root;
};

Roots solve_equation(double discriminant, int a, int b) {
    Roots roots;

    if (discriminant <= 0) {
        exit(1);
    }

    roots.first_root = (-b + sqrt(discriminant)) / 2 * a;
    roots.second_root = (-b - sqrt(discriminant)) / 2 * a;
    return roots;
}

Roots solve_equation(int a, int b) {
    Roots roots;
    roots.first_root = -b / 2 * a;
    roots.second_root = NAN;
    return roots;
}


int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    double d = discriminant(a, b, c);
    Roots solution;

    if (d < 0) {
        std::cout << "No real solutions" << std::endl;
        exit(1);
    } else if (d == 0) {
        solution = solve_equation(a, b);
    } else if (d > 0) {
        solution = solve_equation(d, a, b);
    }
    std::cout << "Solution is: " << solution.first_root << ' ' << solution.second_root << std::endl;
    return 0;
}