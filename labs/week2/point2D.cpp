#include "point2D.h"

double Point2D::GetX() const {
    return x_;
}

double Point2D::GetY() const {
    return y_;
}

void Point2D::SetX(double x) {
    x_ = x;
}

void Point2D::SetY(double y) {
    y_ = y;
}

Point2D::Point2D(double x, double y): x_(x), y_(y) {
}

void Point2D::shift_y(double y) {
    y_ += y;
}

void Point2D::shift_x(double x) {
    x_ += x;
}

void Point2D::shift(double x, double y) {
    shift_x(x);
    shift_y(y);
}
