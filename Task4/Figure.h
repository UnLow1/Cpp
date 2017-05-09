#ifndef TASK4_FIGURE_H
#define TASK4_FIGURE_H

#include <ostream>
#include "Point.h"

using namespace std;

class Figure{
public:
    Figure(const Point &middle, const string &name);

    virtual ~Figure();

    void setName(const string &name);

    virtual string description();

    virtual float field();

    friend ostream &operator<<(ostream &os, const Figure &figure);

private:
    Point middle;
    string name;
};

#endif //TASK4_FIGURE_H
