#ifndef CALCULATOR_CALC_H
#define CALCULATOR_CALC_H

#include <stack>
#include <string>
#include <unordered_map>
#include "operators.h"

class Calculator {
public:
    Calculator(std::string);
    double calculate() const;
    void register_operator(const Operator& op);

private:
   std::stack<char> operator_stack_;
   std::stack<double> operand_stack_;
   std::string expression_;
   std::unordered_map<char, Operator> op_mapping_;
};
#endif //CALCULATOR_CALC_H
