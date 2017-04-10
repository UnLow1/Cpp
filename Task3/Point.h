#ifndef TASK3_POINT_H
#define TASK3_POINT_H

#include <ostream>

class Point {
private:
    float x;
    float y;
public:
    Point();

    Point(float x, float y);

    friend std::ostream &operator<<(std::ostream &os, const Point &point);
};

#endif //TASK3_POINT_H
