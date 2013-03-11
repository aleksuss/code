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
