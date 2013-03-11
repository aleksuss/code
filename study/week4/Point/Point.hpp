#ifndef POINT_HPP
#define POINT_HPP

class Point {
private:
    double x, y;
    
public:    
    Point(); 
    Point(double x, double y);
    
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    double getDistance(Point& other);
    double getX() const;
    double getY() const;
};

std::ostream& operator<<(std::ostream& out, Point& other);

#endif
