#ifndef TASK4_POINT_H
#define TASK4_POINT_H

#include <ostream>

class Point {
private:
    float x;
    float y;
public:
    float getX() const;

    float getY() const;

    void setY(float y);

    void setX(float x);

    Point(float x, float y);

    friend std::ostream &operator<<(std::ostream &os, const Point &point);

    friend std::istream &operator>>(std::istream &is, const Point &point);

};

#endif //TASK4_POINT_H
