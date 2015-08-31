#include <iostream>

int main() {
    const int n1 = 567;
    const int n2 = 999;

    double res1 = 0;
    double res2 = 0;

    for (double i = 1; i <= n1; ++i) {
        res1 += 1/i;
    }

    for (double i = 1; i <= n2; ++i) {
        res2 += 1/i;
    }

    std::cout << "First serie result = " << res1 << std::endl;
    std::cout << "Second serie result = " << res2 << std::endl;

    return 0;
}