#include "calc.h"

Calculator::Calculator(std::string string): expression_(string) {}

void Calculator::register_operator(const Operator& op) {
    if(op_mapping_.count(op.get_operator()) == 1) {
        return;
    }
    op_mapping_[op.get_operator()] = op;
}

double Calculator::calculate() const {

    return 0;
}
