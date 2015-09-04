#include <iostream>
#include "math.h"

struct Circle {
    int x;
    int y;
    int radius;
};

struct Point {
    int x;
    int y;
};

bool point_belongs_to_circle(Circle circle, Point point) {
    return pow((point.x - circle.x), 2) + pow((point.y - circle.y), 2) < pow(circle.radius, 2);
}


int main() {
    Circle circle = {2, 2, 10};
    std::cout << "Given circle with coordinates x: " << circle.x << ", y: " << circle.y << ", and radius: ";
    std::cout << circle.radius << ", enter x and y coordinates to find if point belongs to circle." << std::endl;

    Point point;
    std::cin >> point.x >> point.y;
    std::cout << point_belongs_to_circle(circle, point) << std::endl;
    return 0;
}