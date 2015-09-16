#ifndef STACK_STACK_H
#define STACK_STACK_H

class Stack {
public:
    Stack(int capacity);
    ~Stack();

    int size() const;
    int capacity() const;
    double top() const;

    bool pop();
    bool push(int value);
    bool full() const;
    bool empty() const;

private:
    int capacity_;
    int stack_size_ = 0;
    int pos_ = 0;
    double* stack_;
};
#endif //STACK_STACK_H
