#include <iostream>
#include <cmath>

bool all_positive(int a, int b, int c){
    return a > 0 && b > 0 && c > 0;
}
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << all_positive(a, b, c) << std::endl;
    return 0;
}