#include "stack.h"
#include "math.h"

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
    *push_ptr_ = value;
    ++push_ptr_;
    --capacity_;
    return true;
}

bool Stack::pop() {
    if (empty()) {
        return false;
    }
    --push_ptr_;
    ++capacity_;
    return true;
}

int Stack::top() {
    if(empty()) {
        return NAN;
    }
    return *push_ptr_;
}

bool Stack::full() {
    return capacity_ == 0;
}

bool Stack::empty() {
    return capacity_ == stack_size_;
}

Stack::Stack() {
    capacity_ = stack_size_;
};
