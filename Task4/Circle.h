#ifndef TASK4_CIRCLE_H
#define TASK4_CIRCLE_H

#include <ostream>
#include "Figure.h"

class Circle : Figure {
private:
    float radius;

public:
    Circle(const Point &middle, const string &name, float radius);

    string description();

    float field();

    friend ostream &operator<<(ostream &os, const Circle &circle);
};

#endif //TASK4_CIRCLE_H
