#include "array.h"
#include "math.h"

Array::Array(int size): size_(size) {
    array_ = new double[size];
}

void Array::nullify() {
    fill_with(0);
}

void Array::fill_with(double value) {
    for(int i = 0; i < size_; ++i) {
        array_[i] = value;
    }
}

double Array::get_by_index(int index) {
    if(index < 0 || index >= size_) {
        return NAN;
    }
    return array_[index];
}

bool Array::set_by_index(int index, double value) {
    if(index < 0 || index >= size_) {
        return false;
    }
    array_[index] = value;
    return true;
}
