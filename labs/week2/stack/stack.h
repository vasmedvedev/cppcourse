#ifndef STACK_STACK_H
#define STACK_STACK_H

class Stack {
public:
    Stack();

    int capacity();
    int size() const;
    int top();

    bool pop();
    bool push(int value);
    bool empty();
    bool full();

private:
    const int stack_size_ = 10;

    int capacity_;
    int stack_[10];
    int* push_ptr_ = stack_;
    int* pop_ptr_ = stack_;
};
#endif //STACK_STACK_H
