#ifndef TASK4_TRIANGLE_H
#define TASK4_TRIANGLE_H

#include <ostream>
#include "Figure.h"

class Triangle : Figure {
private:
    Point P1;
    Point P2;
    Point P3;

public:
    string description();

    float field();

    Triangle(const Point &middle, const string &name, const Point &P1, const Point &P2, const Point &P3);

    friend ostream &operator<<(ostream &os, const Triangle &triangle);
};

#endif //TASK4_TRIANGLE_H
