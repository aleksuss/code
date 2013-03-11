#include <iostream>
#include <cmath>
#include "Complex.hpp"

Complex::Complex() : re(0), im(0) { }
Complex::Complex(double re, double im) : re(re), im(im) { }

void Complex::operator+=(Complex& other) {
    re += other.re;
    im += other.im;
}
void Complex::operator-=(Complex& other) {
    re -= other.re;
    im -= other.im;
}
void Complex::operator*=(Complex& other) {
    re *= other.re;
    im *= other.im;
}
Complex Complex::operator+(const Complex& other) {
    Complex result = *this;
    result.im += other.im;
    result.re += other.re;
    return result;
}
Complex Complex::operator-(const Complex& other) {
    Complex result = *this;
    result.im -= other.im;
    result.re -= other.re;
    return result;
}
Complex Complex::operator*(const Complex& other) {
    Complex result = *this;
    result.im *= other.im;
    result.re *= other.re;
    return result;
}
bool Complex::operator==(const Complex& other) {
    return im == other.im && re == other.re;
}
bool Complex::operator!=(const Complex& other) {
    return !(*this == other);
}
double Complex::abs() {
    return hypot(re, im);
}
double Complex::getRe() const {
    return re;
}
double Complex::getIm() const {
    return im;
}

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    if ( c.getIm() < 0 ) {
        return out << c.getRe() << c.getIm();
    } else {
        return out << c.getRe() << '+' << c.getIm();
    }
}