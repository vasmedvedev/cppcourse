#ifndef STACK_STACK_H
#define STACK_STACK_H

class Stack {
public:
    Stack(int size);
    ~Stack();

    int capacity();
    int size() const;
    double top();

    bool pop();
    bool push(int value);
    bool empty();
    bool full();

private:
    int stack_size_;
    int capacity_;
    int pos_ = 0;
    double* stack_;
};
#endif //STACK_STACK_H
