#include "utils.h"
#include "math.h"

double distance(const double a_x, const double a_y, const double b_x, const double b_y) {
    double cathethus_x = fabs(a_x - b_x);
    double cathethus_y = fabs(a_y - b_y);
    double result = sqrt(pow(cathethus_x, 2) + pow(cathethus_y, 2));
    return result;
}
