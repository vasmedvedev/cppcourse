#include <iostream>
#include "point2D.h"
#include "triangle.h"

using namespace std;

int main() {
//    double x, y, z;
//    cin >> x >> y >> z;
    Point2D a(2, 4);
    Point2D b(3, 5);
    Point2D c(4, 3);

    Triangle triangle(a, b ,c);
    triangle.show_triangle();

    triangle.shift(5, 10);
    triangle.show_triangle();

    return 0;
}