#ifndef ARRAY_CLASS_ARRAY_H
#define ARRAY_CLASS_ARRAY_H

class Array {
public:
    Array(int size = 10);
    Array(const Array& array);
    ~Array();

    void nullify();
    void fill_with(double value);
    double get(int index);
    bool set(int index, double value);

private:
    int size_;
    double* array_;
};
#endif //ARRAY_CLASS_ARRAY_H
