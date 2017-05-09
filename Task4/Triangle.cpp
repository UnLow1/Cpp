#include <cmath>
#include "Triangle.h"

Triangle::Triangle(const Point &middle, const string &name, const Point &P1, const Point &P2, const Point &P3) : Figure(
        middle, name), P1(P1), P2(P2), P3(P3) {}

string Triangle::description() {
    return "Triangle with points P1, P2, P3";
}

float Triangle::field() {
    return abs((P2.getX() - P1.getX()) * (P3.getY() - P1.getY()) - (P2.getY() - P1.getY()) * (P3.getX() - P1.getX())) / 2;
//    return Figure::field();
}

ostream &operator<<(ostream &os, const Triangle &triangle) {
    os << static_cast<const Figure &>(triangle) << "P1: " << triangle.P1 << "P2: " << triangle.P2 << "P3: "
       << triangle.P3;
    return os;
}
