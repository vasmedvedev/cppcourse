#include <iostream>
#include "singleton.h"

using namespace std;

int main() {
    Singleton& s = Singleton::get_instance();
    cout << s.say_hello() << s.get_count() << endl;

    Singleton& s2 = Singleton::get_instance();
    cout << s.say_hello() << s.get_count() << endl;
    return 0;
}