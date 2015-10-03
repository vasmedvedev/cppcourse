#include "calc.h"
#include <cstdlib>
#include <iostream>

Calculator::Calculator(std::string string): expression_(string) {}

const char Calculator::OPEN_BRACKET = '(';
const char Calculator::CLOSE_BRACKET = ')';

void Calculator::register_operator(const Operator* op) {
    if(op_mapping_.count(op->get_operator()) > 0) {
        return;
    }
    op_mapping_[op->get_operator()] = op;
}

double Calculator::calculate() {
    for(int i = 0; i < expression_.length(); i++) {
        char c = expression_[i];
        if(isdigit(c)) {
            operand_stack_.push(std::strtod(&c, NULL)); // There is probably a better way...
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
