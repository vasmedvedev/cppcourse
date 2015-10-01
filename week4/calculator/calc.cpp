#include "calc.h"
#include <ctype.h>

Calculator::Calculator(std::string string): expression_(string) {}

void Calculator::register_operator(const Operator* op) {
    if(op_mapping_.count(op->get_operator()) > 0) {
        return;
    }
    op_mapping_[op->get_operator()] = op;
}

double Calculator::calculate() const {
    for(int i = 0; i < expression_.length(); i++) {
        char c = expression_[i];
        if(isdigit(c)) {
            operand_stack_.push(c);
            continue;
        } else {
           if(c == OPEN_BRACKET) {
               operator_stack_.push(c);
               continue;
           } else if(c == CLOSE_BRACKET) {
               continue;
           }
           if(!op_mapping_.count(c)) {
               throw UnknownOperatorException();
           } else {

           }
        }
    }
    return 0;
}

void Calculator::process_char(char c) {
    if (c == '('
           operator_stack_.push(c);
   }
}
