#include "objects.h"

using namespace std;

Complex::Complex() {
    x = 0;
    y = 0;
}

Complex::Complex(int x, int y) {
    this->x = x;
    this->y = y;
}

int Complex::getX() const {
    return x;
}

int Complex::getY() const {
    return y;
}

Complex Complex::operator+(const Complex &number) const{
    Complex result(this->x + number.getX(), this->y + number.getY());
    return result;
}

Complex Complex::operator!() {
    Complex result (-this->x,-this->y);
    return result;
}

bool Complex::operator==(const Complex &rhs) const {
    return x == rhs.x &&
           y == rhs.y;
}

bool Complex::operator!=(const Complex &rhs) const {
    return !(rhs == *this);
}

const int& Complex::operator[](int index) const {
    return tab[index];
}

Complex operator-(const Complex &a, const Complex &b) {
    Complex result(a.getX() - b.getX(), a.getY() - b.getY());
    return result;
}


ostream &operator<<(ostream &out, const Complex &complex) {
    return out << complex.getX() << " + " << complex.getY() << "i" << endl;
}