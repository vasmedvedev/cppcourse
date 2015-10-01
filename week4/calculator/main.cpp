#include <iostream>
#include "operators.h"
#include "calc.h"

using namespace std;

int main() {
    Calculator calc("1+2");

    Add add;
    Subtract subtract;

    calc.register_operator(&add);
    calc.register_operator(&subtract);

    return 0;
}