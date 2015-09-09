#include <iostream>
#include "array.h"

using namespace std;

int main() {
    int size = 999;
    Array array(size);
    array.nullify();
    cout << array.get(1) << endl;
    array.set(500, 100500);
    cout << array.get(500) << endl;
    Array array2(array);
    cout << array2.get(500) << endl;
    array2.fill_with(111);
    cout << array2.get(100) << " " << array2.get(500) << endl;
    return 0;
}