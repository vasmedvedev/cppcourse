#include <iostream>
#include "operators.h"
#include "calc.h"

using namespace std;

int main() {
    Calculator calc("(2+3)*5+7*(9+8)");

    Add add;
    Subtract subtract;
    Multiply multiply;
    Divide divide;

    calc.register_operator(&add);
    calc.register_operator(&subtract);
    calc.register_operator(&multiply);
    calc.register_operator(&divide);

    cout << calc.calculate() << endl;

    return 0;
}