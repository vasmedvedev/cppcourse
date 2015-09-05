#include "triangle.h"
#include <iostream>

Triangle::Triangle(const Point2D& a, const Point2D& b, const Point2D& c): a_(a), b_(b), c_(c) {
}

void Triangle::show_triangle() {
    std::cout << a_.GetX() << "," << a_.GetY() << " " << b_.GetX() << "," << b_.GetY() << " "
              << c_.GetX() << "," << c_.GetY() << std::endl;
}

void Triangle::shift_x(double x) {
    a_.shift_x(x);
    b_.shift_x(x);
    c_.shift_x(x);
}

void Triangle::shift_y(double y) {
    a_.shift_y(y);
    b_.shift_y(y);
    c_.shift_y(y);
}

void Triangle::shift(double x, double y) {
    shift_x(x);
    shift_y(y);
}
