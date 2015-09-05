#ifndef WEEK2_POINT2D_H
#define WEEK2_POINT2D_H

class Point2D {
private:
    double x_;
    double y_;
public:
    Point2D(double x = 0.0, double y = 0.0);

    double GetX() const;
    double GetY() const;
    void SetX(double x);
    void SetY(double y);

    void shift(double x, double y);
    void shift_x(double x);
    void shift_y(double y);
};

#endif //WEEK2_POINT2D_H
