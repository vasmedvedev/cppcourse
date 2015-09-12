#include "array.h"
#include <cmath>
#include <exception>

Array::Array(int size): size_(size) {
    array_ = new double[size];
}

Array::Array(const Array& array): size_(array.size_) {
    array_ = new double[size_];
    for(int i = 0; i < size_; i++) {
        array_[i] = array.array_[i];
    }
}

void Array::nullify() {
    fill_with(0);
}

void Array::fill_with(double value) {
    for(int i = 0; i < size_; ++i) {
        array_[i] = value;
    }
}

const double Array::get(int index) {
    if(index < 0 || index >= size_) {
        throw std::exception();
    }
    return array_[index];
}

bool Array::set(int index, double value) {
    if(index < 0 || index >= size_) {
        return false;
    }
    array_[index] = value;
    return true;
}

Array::~Array() {
    delete[] array_;
}

int Array::size() const {
    return size_;
}
