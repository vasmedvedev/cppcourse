#include "operators.h"

double Add::calculate(double a, double b) const {
    return a + b;
}

double Subtract::calculate(double a, double b) const {
    return a - b;
}

//int Operator::get_priority() const {
//    return priority_;
//}
//
//char Operator::get_operator() const {
//    return operator_;
//}
