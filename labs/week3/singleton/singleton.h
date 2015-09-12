#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H

#include <string>

class Singleton {
private:
    Singleton();
    Singleton(const Singleton&);
    ~Singleton();
    static int count;

public:
    std::string say_hello() const;
    static Singleton& get_instance();
    static int get_count();
};

#endif //SINGLETON_SINGLETON_H
