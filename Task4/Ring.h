#ifndef TASK4_RING_H
#define TASK4_RING_H

#include <ostream>
#include "Circle.h"

class Ring : Circle {
private:
    float inner_radius;

public:
    Ring(const Point &middle, const string &name, float radius, float inner_radius);

    string description();

    float field();

    friend ostream &operator<<(ostream &os, const Ring &ring);
};

#endif //TASK4_RING_H
