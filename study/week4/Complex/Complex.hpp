#ifndef COMPLEX_HPP
#define COMPLEX_HPP
class Complex {
private:
    double re, im;
public:
    Complex();
    Complex(double, double);
    void operator+=(Complex&);
    void operator-=(Complex&);
    void operator*=(Complex&);
    Complex operator+(const Complex&);
    Complex operator-(const Complex&);
    Complex operator*(const Complex&);
    bool operator==(const Complex&);
    bool operator!=(const Complex&);
    double abs();
    double getRe() const;
    double getIm() const;
};
std::ostream& operator<<(std::ostream& out, const Complex& c);
#endif
