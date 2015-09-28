#ifndef CALCULATOR_OPERATORS_H
#define CALCULATOR_OPERATORS_H
#include <unordered_map>

class Operator {
public:
    Operator();
    virtual double calculate(double, double) const;
};
#endif //CALCULATOR_OPERATORS_H


class Add: public Operator {
public:
    double calculate(double, double) const;

private:
    int priority = 0;
    char operator_ = '+';
};

class Subtract : public Operator {
public:
    double calculate(double, double) const;

private:
    int priority = 0;
    char operator_ = '-';
};