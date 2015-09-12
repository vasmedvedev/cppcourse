#ifndef ARRAY_CLASS_ARRAY_H
#define ARRAY_CLASS_ARRAY_H

class Array {
public:
    Array(int size);
    Array(const Array& array);
    ~Array();

    void nullify();
    void fill_with(double value);

    const double get(int index);

    int size() const;

    bool set(int index, double value);

private:
    int size_;
    double* array_;
};
#endif //ARRAY_CLASS_ARRAY_H
