#ifndef WEEK2_TRIANGLE_H
#define WEEK2_TRIANGLE_H

#include "point2D.h"

class Triangle {
public:
    Triangle(const Point2D& a, const Point2D& b, const Point2D& c);

//    Point2D GetA() const;
//    Point2D GetB() const;
//    Point2D GetC() const;
//
//    void SetA(Point2D a);
//    void SetB(Point2D b);
//    void SetC(Point2D c);

    void show_triangle();
    void shift(double x, double y);
    void shift_x(double x);
    void shift_y(double y);

private:
    Point2D a_;
    Point2D b_;
    Point2D c_;
};

#endif //WEEK2_TRIANGLE_H
