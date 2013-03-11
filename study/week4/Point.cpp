#include <iostream>
#include <cmath>

using namespace std;

class Point {
    private:
        double x, y;

    public:    
        Point() : x(0), y(0) {}                         /// Constructor 
        Point(double x, double y) : x(x), y(y) { } 
        
        bool operator==(const Point& other) const {
            return x == other.x && y == other.y;
        }
        bool operator!=(const Point& other) const {
            return !(*this == other);
        }
        double getDistance(Point& other) {
            return hypot(other.x-x, other.y-y);
        }
        double getX() const { return x; }
        double getY() const { return y; }
};

ostream& operator<<(ostream& out, Point& other) {
    return out << '(' << other.getX() << ", " << other.getY() << ')' << endl;
}

/*
int main() {
    int x, y;

    cout << "Enter values of first point: ";
    cin >> x >> y;
    Point a(x, y);
    cout << "Enter values of second point: ";
    cin >> x >> y;
    Point b(x, y);

    cout << "Point a is: ";
    cout << a;
    cout << "Point b is: ";
    cout << b;
    
    if ( a == b ) {
        cout << "Point a is equal b!" << endl;
    } else {
        cout << "Point a isn't equal b!" << endl;
    }    
    cout << "Distance before a and b is: " << a.getDistance(b) << endl;

    return 0;
}
*/