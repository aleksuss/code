#include "Point.hpp"

#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
private:
    double x, y;
public:
    Vector();
    Vector(double x, double y);
    Vector(Point a, Point b);
    
    double getLen(Vector& v);
    double getX() const;
    double getY() const;
    void operator+=(Vector& other);
    void operator-=(const Vector& other);
    Vector operator+(Vector other) const;
    Vector operator-(Vector other) const;
    bool operator==(const Vector& other);
    bool operator!=(const Vector& other);
};

std::ostream& operator<<(std::ostream& out, Vector& v);
#endif
