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
    void register_operator(const Operator* op);
    void process_char(char);

private:
    static const char OPEN_BRACKET = '(';
    static const char CLOSE_BRACKET = ')';

    std::stack<char> operator_stack_;
    std::stack<double> operand_stack_;
    std::string expression_;
    std::unordered_map<char, const Operator*> op_mapping_;
};

class UnknownOperatorException {};
#endif //CALCULATOR_CALC_H
