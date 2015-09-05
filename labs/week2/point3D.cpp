#include "point3D.h"


double Point3D::GetX() const {
    return p.GetX();
}

double Point3D::GetY() const {
    return p.GetY();
}

double Point3D::GetZ() const {
    return z_;
}

void Point3D::SetX(double x) {
    p.SetX(x);
}

void Point3D::SetY(double y) {
    p.SetY(y);
}

void Point3D::SetZ(double z) {
    z_ = z;
}

Point3D::Point3D(double x, double y, double z): p(x, y), z_(z) {
}
