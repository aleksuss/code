#include <iostream>
#include <cmath>

#include "Point.hpp"
using namespace std;

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) { } 
        
bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}
bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}
double Point::getDistance(Point& other) {
    return hypot(other.x-x, other.y-y);
}
double Point::getX() const { return x; }
double Point::getY() const { return y; }

ostream& operator<<(ostream& out, Point& other) {
    return out << '(' << other.getX() << ", " << other.getY() << ')' << endl;
}
