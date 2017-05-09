#include <math.h>
#include "Ring.h"

Ring::Ring(const Point &middle, const string &name, float radius, float inner_radius) : Circle(middle, name, radius),
                                                                                        inner_radius(inner_radius) {}

string Ring::description() {
    return "Circle with radius and inner_radius";
}

float Ring::field() {
    //TODO
    return (float)M_PI;
}

ostream &operator<<(ostream &os, const Ring &ring) {
    os << static_cast<const Circle &>(ring) << endl << "inner_radius: " << ring.inner_radius;
    return os;
}
