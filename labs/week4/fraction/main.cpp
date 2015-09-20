#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
    try {
        Fraction<long> f1(5, 10);
        Fraction<long> f2(1, 4);

        cout << f1 + f2 << endl;
        cout << f1 - f2 << endl;
        cout << f1 << endl;
        cout << -f1 << endl;
        cout << +f1 << endl;
        cout << f1 / f2 << endl;
        cout << f1 * f2 << endl;

        double negative = f1;

        cout << negative << endl;

    } catch(ZeroDivisionException& e) {
        cerr << "Zero Division" << endl;
        exit(1);
    } catch(InvalidInitializationException& e) {
        cerr << "Invalid constructor argument" << endl;
        exit(1);
    }
    return 0;
}