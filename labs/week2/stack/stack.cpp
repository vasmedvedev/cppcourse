#include "stack.h"

int Stack::size() const {
    return stack_size_;
}

int Stack::capacity() const {
    return capacity_;
}

bool Stack::push(int value) {
    if (full()) {
        return false;
    }
    stack_[pos_++] = value;
    ++stack_size_;
    return true;
}

bool Stack::pop() {
    if (empty()) {
        return false;
    }
    --pos_;
    --stack_size_;
    return true;
}

double Stack::top() const {
    if(empty()) {
        throw "Stack is empty";
    }
    return stack_[pos_ - 1];
}

bool Stack::empty() const {
    return stack_size_ == 0;
}

bool Stack::full() const {
    return stack_size_ == capacity_;
}

Stack::Stack(int capacity): capacity_(capacity) {
    stack_ = new double[capacity_];
}

Stack::~Stack() {
    delete[] stack_;
}
