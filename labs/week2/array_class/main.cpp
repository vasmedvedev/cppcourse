#include <iostream>
#include "array.h"

using namespace std;

int main() {
    int size = 999;
    Array array(size);
    array.set_by_index(500, 100500);
    cout << array.get_by_index(500);
    return 0;
}