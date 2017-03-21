#include "objects.h"
#include <math.h>

using namespace std;

Point::Point() {
    x = 0;
    y = 0;
    z = 0;
}

Point::Point(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

float Point::getX() const {
    return x;
}

float Point::getY() const {
    return y;
}

float Point::getZ() const {
    return z;
}

Point Point::operator+(const Vector &vector) const {
    Point result(this->x + vector.getX(), this->y + vector.getY(), this->z + vector.getZ());
    return result;
}

Point &Point::operator++() {
    this->x += 1;
    this->y += 1;
    this->z += 1;
    return *this;
}

Point &Point::operator++(int) {
    Point result(x, y, z);
    this->x += 1;
    this->y += 1;
    this->z += 1;
    return result;
}


ostream &operator<<(ostream &out, const Point &point) {
    return out << "(" << point.getX() << ", " << point.getY() << ", " << point.getZ() << ")\n";
}


Vector::Vector(float x, float y, float z) : x(x), y(y), z(z) {}

Vector::Vector() {
    x = 0;
    y = 0;
    z = 0;
}

float Vector::getX() const {
    return x;
}

float Vector::getY() const {
    return y;
}

float Vector::getZ() const {
    return z;
}

Vector Vector::operator+(const Vector &vector) const {
    Vector result(this->x + vector.getX(), this->y + vector.getY(), this->z + vector.getZ());
    return result;
}

Vector &Vector::operator+=(const Vector &vector) {
    this->x += vector.getX();
    this->y += vector.getY();
    this->z += vector.getZ();
    return *this;
}

Vector Vector::operator-() {
    Vector result(-x, -y, -z);
    return result;
}

bool Vector::operator>(const Vector &vector) const {
    return sqrt(x * x + y * y + z * z) >
           sqrt(vector.getX() * vector.getX() + vector.getY() * vector.getY() + vector.getZ() * vector.getZ());
}

const float &Vector::operator[](int index) const {
    if (index == 0)
        return x;
    else if (index == 1)
        return y;
    else if (index == 2)
        return z;
    return 0;
}

Vector::operator float() {
    return sqrt(x * x + y * y + z * z);
}


ostream &operator<<(ostream &out, const Vector &vector) {
    return out << "(" << vector.getX() << ", " << vector.getY() << ", " << vector.getZ() << ")\n";
}

Vector operator*(const Vector &vector, const float &number) {
    Vector result(vector.getX() * number, vector.getY() * number, vector.getZ() * number);
    return result;
}

Vector operator*(const float &number, const Vector &vector) {
    Vector result(vector.getX() * number, vector.getY() * number, vector.getZ() * number);
    return result;
}
