#include <iostream>
#include <cmath>

#include "Point.cpp"

using namespace std;

class Vector {
    private:
        double x, y;
    public:
        Vector() : x(0), y(0) {}
        Vector(double x, double y) : x(x), y(y) {}
        Vector(Point a, Point b) : x(a.getX() - b.getX()), y(a.getY()-b.getY()) {}
        double getLen(Vector& v) {
            return hypot(v.x, v.y);
        }
        double getX() const { return x; }
        double getY() const { return y; }
        void operator+=(Vector& other) {
            x += other.x;
            y += other.y;
        }
        void operator-=(const Vector& other) {
            x -= other.x;
            y -= other.y;
        }
        Vector operator+(Vector other) const {
            Vector result = *this;
            result += other;
            return result;    
        }
        Vector operator-(Vector other) const {
            Vector result = *this;
            result -= other;
            return result;    
        }
        bool operator==(const Vector& other) {
            return other.x == x && other.y == y;
        }
        bool operator!=(const Vector& other) {
            return !(*this == other);
        }
};

ostream& operator<<(ostream& out, Vector& v) {
    return out << '(' << v.getX() << ", " << v.getY() << ')' << endl;
}

int main() {
    Vector a(5, 6);
    Vector b(1, 1);
    Point x(1, 1);
    Point y(2, 2);
    Vector c(x, y);
    Vector d = a + b;

    //a += b;

    cout << a;
    cout << b;
    cout << c;
    cout << d;
    cout << a;
    cout << b;

    if ( a == b ) {
        cout << "Vectors is equal!" << endl;
    } else {
        cout << "Vectors is different!" << endl;
    }
    cout << a.getLen(b) << endl;

    return 0;
}

/*
#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Vector;

Vector vectorSum(Vector a, Vector b) {
    a.x += b.x;
    a.y += b.y;
    return a;
}

Vector vectorDiff(Vector a, Vector b) {
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

void vectorIncrement(Vector *this, Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void vectorDecrement(Vector *this, Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

int vectorEqual(Vector a, Vector b) {
    if ( a.x == b.x && a.y == b.y ) {
        return 1;
    }
    return 0;
}

double vectorLen(Vector this) {
    return hypot(this.x, this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)", this.x, this.y);
}
*/
