#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H

#include <string>
#include "operators/abstract_operator.h"

class Calculator {
public:
    double calculate(std::string) const;
    bool Register(BinaryOperator);
};

#endif //CALCULATOR_CALCULATOR_H
