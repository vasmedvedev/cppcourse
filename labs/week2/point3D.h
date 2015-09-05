#ifndef WEEK2_POINT3D_H
#define WEEK2_POINT3D_H

#include "point2D.h"

class Point3D {
public:
    Point3D(double x = 0.0, double y = 0.0, double z = 0.0);

    double GetX() const;
    double GetY() const;
    double GetZ() const;

    void SetX(double x);
    void SetY(double y);
    void SetZ(double z);

private:
    Point2D p;
    double z_;
};

#endif //WEEK2_POINT3D_H
