#include "singleton.h"

int Singleton::count = 0;

Singleton& Singleton::get_instance() {
    static Singleton s;
    return s;
}

Singleton::Singleton() {
    count++;
}

std::string Singleton::say_hello() const {
    return std::string("Hello");
}

Singleton::~Singleton() {
    count--;
}

int Singleton::get_count() {
    return count;
}
