#ifndef CALCULATOR_OPERATORS_H
#define CALCULATOR_OPERATORS_H
#include <unordered_map>

class Operator {
public:
    Operator(char op, int priority);
    virtual double calculate(double, double) const = 0;
    virtual int get_priority() const;
    virtual char get_operator() const;

protected:
    int priority_;
    char operator_;
};

class Add: public Operator {
public:
    Add();
    double calculate(double, double) const;
};


class Subtract: public Operator {
public:
    Subtract();
    double calculate(double, double) const;
};

#endif //CALCULATOR_OPERATORS_H
