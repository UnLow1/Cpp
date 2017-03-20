#ifndef TASK2_OBJECTS_H
#define TASK2_OBJECTS_H

#include <iostream>

using namespace std;

class Complex {
private:
    int x;
    int y;
    int tab[];
public:
    Complex();

    Complex(int x, int y);

    int getX() const;

    int getY() const;

    Complex operator+(const Complex &number) const;

    bool operator==(const Complex &rhs) const;

    bool operator!=(const Complex &rhs) const;

//    const int &operator[](int index) const { return tab[index]; }

    const int &operator[](int index) const;

    Complex operator!();

    operator Complex();
};

Complex operator-(const Complex &a, const Complex &b);

ostream &operator<<(ostream &out, const Complex &complex);

#endif //TASK2_OBJECTS_H
