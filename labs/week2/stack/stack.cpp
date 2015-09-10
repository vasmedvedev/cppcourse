#include "stack.h"

int Stack::capacity() {
    return capacity_;
}

int Stack::size() const {
    return stack_size_;
}

bool Stack::push(int value) {
    if (full()) {
        return false;
    }
    stack_[pos_++] = value;
    --capacity_;
    return true;
}

bool Stack::pop() {
    if (empty()) {
        return false;
    }
    --pos_;
    ++capacity_;
    return true;
}

double Stack::top() {
    if(empty()) {
        throw "Stack is empty";
    }
    return stack_[pos_ - 1];
}

bool Stack::full() {
    return capacity_ == 0;
}

bool Stack::empty() {
    return capacity_ == stack_size_;
}

Stack::Stack(int size): stack_size_(size), capacity_(size) {
    stack_ = new double[stack_size_];
}

Stack::~Stack() {
    delete[] stack_;
}
