#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H

#include <ostream>
//const Fraction operator+();

template<typename T>
class Fraction {
public:
    Fraction(T n = 0, T d = 1);
    T get_nominator() const;
    T get_denominator() const;
    void reduce();

    Fraction& operator*=(const Fraction&);
    Fraction& operator+=(const Fraction&);
    Fraction& operator-=(const Fraction&);
    Fraction& operator/=(const Fraction&);

    operator double() const;

    const Fraction operator-();
    const Fraction operator+();

private:
    T gcd(T, T);
    T lcm(T, T);
    T n_;
    T d_;
};

template<typename T>
const Fraction<T> operator+(const Fraction<T>&, const Fraction<T>&);
template<typename T>
const Fraction<T> operator-(const Fraction<T>&, const Fraction<T>&);
template<typename T>
const Fraction<T> operator/(const Fraction<T>&, const Fraction<T>&);
template<typename T>
const Fraction<T> operator*(const Fraction<T>&, const Fraction<T>&);

class FractionException {};
class ZeroDivisionException: public FractionException {};
class InvalidInitializationException: public FractionException {};

template<typename T>
std::ostream& operator<<(std::ostream& out, const Fraction<T>& f);


//--------

template<typename T>
Fraction<T>::Fraction(T n, T d): n_(n), d_(d) {
    if(d == 0) {
        throw InvalidInitializationException();
    }
}

template<typename T>
T Fraction<T>::gcd(T a, T b) {
    return b == 0 ? a : gcd(b, a % b);
}

template<typename T>
T Fraction<T>::get_denominator() const {
    return d_;
}

template<typename T>
T Fraction<T>::get_nominator() const {
    return n_;
}

template<typename T>
void Fraction<T>::reduce() {
    T divisor = gcd(n_, d_);
    n_ /= divisor;
    d_ /= divisor;
}

template<typename T>
T Fraction<T>::lcm(T a, T b) {
    return a * b / gcd(a, b);
}

template<typename T>
const Fraction<T> operator+(const Fraction<T> &fr1, const Fraction<T> &fr2) {
    Fraction<T> result(fr1);
    return result += fr2;
}

template<typename T>
const Fraction<T> operator*(const Fraction<T> &fr1, const Fraction<T> &fr2) {
    Fraction<T> result(fr1);
    return result *= fr2;
}

template<typename T>
const Fraction<T> operator-(const Fraction<T> &fr1, const Fraction<T> &fr2) {
    Fraction<T> result(fr1);
    return result -= fr2;
}

template<typename T>
const Fraction<T> operator/(const Fraction<T> &fr1, const Fraction<T> &fr2) {
    Fraction<T> result(fr1);
    return result /= fr2;
}

template<typename T>
Fraction<T> &Fraction<T>::operator-=(const Fraction<T> &fraction) {
    Fraction<T> tmp(fraction);
    return *this += -tmp;
}

template<typename T>
Fraction<T> &Fraction<T>::operator/=(const Fraction<T> &fraction) {
    if(fraction.n_ == 0) {
        throw ZeroDivisionException();
    }
    d_ *= fraction.n_;
    n_ *= fraction.d_;
    reduce();
    return *this;
}

template<typename T>
Fraction<T> &Fraction<T>::operator*=(const Fraction<T> &fraction) {
    d_ *= fraction.d_;
    n_ *= fraction.n_;
    reduce();
    return *this;
}

template<typename T>
Fraction<T> &Fraction<T>::operator+=(const Fraction<T> &fraction) {
    T multiple = lcm(d_, fraction.d_);
    T n1 = n_ * (multiple / d_);
    T n2 = fraction.n_ * (multiple / fraction.d_);
    n_ = n1 + n2;
    d_ = multiple;
    reduce();
    return *this;
}

template<typename T>
const Fraction<T> Fraction<T>::operator-() {
    return Fraction(-n_, d_);
}

template<typename T>
const Fraction<T> Fraction<T>::operator+() {
    return Fraction(n_, d_);
}

template<typename T>
Fraction<T>::operator double() const {
    return static_cast<double>(n_) / d_;
}

template<typename T>
std::ostream &operator<<(std::ostream &out, const Fraction<T> &f) {
    out << f.get_nominator() << "/" << f.get_denominator();
    return out;
}

#endif //FRACTION_FRACTION_H
