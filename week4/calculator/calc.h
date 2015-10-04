#ifndef CALCULATOR_CALC_H
#define CALCULATOR_CALC_H

#include <stack>
#include <unordered_map>
#include "operators.h"
#include <regex>

class Calculator {
public:
    Calculator(std::string);
    double calculate();
    void register_operator(const Operator* op);
    void process_brackets();
    void reduce();
    std::string clean_expression(std::string s) const;

private:
    static const char OPEN_BRACKET;
    static const char CLOSE_BRACKET;
    static const std::regex DIGITS_RE;
    static const std::regex EXPRESSION_RE;

    std::stack<char> operator_stack_;
    std::stack<double> operand_stack_;
    std::string expression_;
    std::unordered_map<char, const Operator*> op_mapping_;
};

class UnknownOperatorException {};
class InvalidExpressionException {};
#endif //CALCULATOR_CALC_H
