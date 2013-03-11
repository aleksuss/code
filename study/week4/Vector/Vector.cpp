#include <iostream>
#include <cmath>

#include "Point.hpp"
#include "Vector.hpp"

using namespace std;

Vector::Vector() : x(0), y(0) {}
Vector::Vector(double x, double y) : x(x), y(y) {}
Vector::Vector(Point a, Point b) : x(a.getX() - b.getX()), y(a.getY()-b.getY()) {}
double Vector::getLen(Vector& v) {
    return hypot(v.x, v.y);
}
double Vector::getX() const { return x; }
double Vector::getY() const { return y; }
void Vector::operator+=(Vector& other) {
    x += other.x;
    y += other.y;
}
void Vector::operator-=(const Vector& other) {
    x -= other.x;
    y -= other.y;
}
Vector Vector::operator+(Vector other) const {
    Vector result = *this;
    result += other;
    return result;    
}
Vector Vector::operator-(Vector other) const {
    Vector result = *this;
    result -= other;
    return result;    
}
bool Vector::operator==(const Vector& other) {
    return other.x == x && other.y == y;
}
bool Vector::operator!=(const Vector& other) {
    return !(*this == other);
}

ostream& operator<<(ostream& out, Vector& v) {
    return out << '(' << v.getX() << ", " << v.getY() << ')' << endl;
}


