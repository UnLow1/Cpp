#include "Point.h"

Point::Point(float x, float y) : x(x), y(y) {}

float Point::getX() const {
    return x;
}

float Point::getY() const {
    return y;
}

void Point::setY(float y) {
    Point::y = y;
}

void Point::setX(float x) {
    Point::x = x;
}

std::ostream &operator<<(std::ostream &os, const Point &point) {
    os << "x: " << point.x << " y: " << point.y << std::endl;
    return os;
}

//std::istream &operator>>(std::istream &is, const Point &point) {
//    is >>  point.x >> point.y;
//    return is;
//}
