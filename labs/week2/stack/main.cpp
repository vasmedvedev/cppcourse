#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack stack(10);
    int a = 999;
    cout << "Stack size: " << stack.size() << endl;
    cout << "Stack empty: " << stack.empty() << endl;
    cout << "Stack pop: " << stack.pop() << endl;
    cout << "Pushing stack: " << a << ", result: " << stack.push(a) << endl;
    cout << "Stack top: " << stack.top() << endl;
    cout << "Pushing stack...: " << stack.push(100) << endl;
    cout << "Stack top: " << stack.top() << endl;
    cout << "Stack capacity: " << stack.capacity() << endl;
    cout << "Stack pop: " << stack.pop() << endl;
    cout << "Stack top: " << stack.top() << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Stack push: " << stack.push(1) << endl;
    }
    cout << "Is full: " << stack.full() << endl;
    return 0;
}