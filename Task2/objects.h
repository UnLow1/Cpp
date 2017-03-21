#ifndef TASK2_OBJECTS_H
#define TASK2_OBJECTS_H

#include <iostream>

using namespace std;

class Vector {
private:
    float x;
    float y;
    float z;
public:
    Vector(float x, float y, float z);

    Vector();

    float getX() const;

    float getY() const;

    float getZ() const;

    Vector operator+(const Vector &vector) const;

    Vector &operator+=(const Vector &vector);

    Vector operator-();

    const float &operator[](int index) const;

    bool operator>(const Vector &vector) const;

    operator float();
};

ostream &operator<<(ostream &out, const Vector &vector);

Vector operator*(const Vector &vector, const float &number);

Vector operator*(const float &number, const Vector &vector);


class Point {
private:
    float x;
    float y;
    float z;

public:
    Point();

    Point(float x, float y, float z);

    float getZ() const;

    float getX() const;

    float getY() const;

    Point operator+(const Vector &vector) const;

    Point &operator++();

    Point &operator++(int);

};

ostream &operator<<(ostream &out, const Point &point);


#endif //TASK2_OBJECTS_H
