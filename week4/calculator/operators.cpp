#include "operators.h"

Operator::Operator(char op, int priority): operator_(op), priority_(priority) {}

char Operator::get_operator() const {
    return operator_;
}

int Operator::get_priority() const {
    return priority_;
}

/* ------------- */

Add::Add(): Operator('+', 0) {}
double Add::calculate(double a, double b) const {
    return a + b;
}


/* ------------- */

Subtract::Subtract(): Operator('-', 0) {}
double Subtract::calculate(double a, double b) const {
    return a - b;
}
