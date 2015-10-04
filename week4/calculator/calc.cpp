#include "calc.h"
#include <cstdlib>
#include <iostream>
#include <algorithm>

Calculator::Calculator(std::string string): expression_(clean_expression(string)) {}

const char Calculator::OPEN_BRACKET = '(';
const char Calculator::CLOSE_BRACKET = ')';
const std::regex Calculator::DIGITS_RE("\\d+");
const std::regex Calculator::EXPRESSION_RE("^[\\d\\(\\)\\+\\*\\/\\-]*$");

void Calculator::register_operator(const Operator* op) {
    if(op_mapping_.count(op->get_operator()) > 0) {
        return;
    }
    op_mapping_[op->get_operator()] = op;
}

double Calculator::calculate() {
    std::smatch match;
    for(size_t i = 0; i < expression_.length(); i++) {
        char c = expression_[i];
        if(isdigit(c)) {
            std::regex_search(expression_.substr(i, expression_.length() - i), match, DIGITS_RE);
            const char* digits_ptr = match.str().c_str();
            operand_stack_.push(std::strtod(digits_ptr, nullptr)); // There is probably a better way...
            i += match.length() - 1;
            continue;
        } else {
           if(c == OPEN_BRACKET) {
               operator_stack_.push(c);
               continue;
           } else if(c == CLOSE_BRACKET) {
               process_brackets();
               continue;
           }
           if(!op_mapping_.count(c)) {
               throw UnknownOperatorException();
           } else if (!operator_stack_.empty() && operator_stack_.top() == OPEN_BRACKET) {
               operator_stack_.push(c);
               continue;
           } else if (!operator_stack_.empty() && op_mapping_[c]->get_priority() < op_mapping_[operator_stack_.top()]->get_priority()) {
               reduce();
               operator_stack_.push(c);
               continue;
           }
           operator_stack_.push(c);
        }
    }
    while (!operator_stack_.empty()) {
        reduce();
    }
    return operand_stack_.top();
}


void Calculator::reduce() {
    double op2 = operand_stack_.top();
    operand_stack_.pop();
    double op1 = operand_stack_.top();
    operand_stack_.pop();

    const Operator* op = op_mapping_[operator_stack_.top()];
    operator_stack_.pop();

    operand_stack_.push(op->calculate(op1, op2));
}

void Calculator::process_brackets() {
    while (operator_stack_.top() != OPEN_BRACKET) {
        reduce();
    }
    operator_stack_.pop();
}

std::string Calculator::clean_expression(std::string s) const {
    /* Attempt to clean data before processing */

    const std::string::iterator begin = s.begin();
    const std::string::iterator end = s.end();

    long opened = std::count(begin, end, OPEN_BRACKET);
    long closed = std::count(begin, end, CLOSE_BRACKET);

    if (opened != closed) {
        throw InvalidExpressionException();
    }

    std::remove(begin, end, ' ');

    std::smatch m;
    std::regex_search(s, m, EXPRESSION_RE);
    if (!m.size()) {
        throw InvalidExpressionException();
    }
    return s;
}
