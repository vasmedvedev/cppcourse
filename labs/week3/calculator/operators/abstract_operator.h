#ifndef CALCULATOR_ABSTRACT_OPERATOR_H
#define CALCULATOR_ABSTRACT_OPERATOR_H

class BinaryOperator {
public:
    virtual double calc(double, double) const = 0;
};

#endif //CALCULATOR_ABSTRACT_OPERATOR_H
