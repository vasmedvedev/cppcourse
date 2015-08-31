#include "utils.h"
#include "math.h"

double area(double radius) {
    return pow(radius, 2) * M_PI;
}

double circumference(double radius) {
    return 2 * M_PI * radius;
}
