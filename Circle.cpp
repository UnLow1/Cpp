#include <math.h>
#include "Circle.h"

Circle::Circle(const Point &middle, const string &name, float radius) : Figure(middle, name), radius(radius) {
}

string Circle::description() {
    return "Circle with radius ";
}

float Circle::field() {
    return radius * radius * (float) M_PI;
}

ostream &operator<<(ostream &os, const Circle &circle) {
    os << static_cast<const Figure &>(circle) << "radius: " << circle.radius;
    return os;
}
