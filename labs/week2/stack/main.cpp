#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack stack;
    int a = 999;
    cout << "Stack size: " << stack.size() << endl;
    cout << "Stack empty: " << stack.empty() << endl;
    cout << "Stack top: " << stack.top() << endl;
    cout << "Stack pop: " << stack.pop() << endl;
    cout << "Stack top: " << stack.top() << endl;
    cout << "Pushing stack: " << a << ", result: " << stack.push(a) << endl;
    cout << "Stack top: " << stack.top() << endl;
    return 0;
}