#include <iostream>
#include "Figure.h"

using namespace std;

Figure::Figure(int i) {
    size = i;
    points = new Point[size];
    el_counter = 0;
}

ostream &operator<<(ostream &os, const Figure &figure) {
    os << "points in figure: " << endl;
    for (int i = 0; i < figure.getEl_counter(); i++)
        os << figure.getPoints()[i] << endl;
    return os;
}

void Figure::AddToEnd(const Point point) {
    if (size == el_counter) {
        throw FullFigureException();
    } else {
        points[el_counter] = point;
        el_counter++;
    }
}

void Figure::AddToStart(const Point point) {
    if (size == el_counter) {
        throw FullFigureException();
    } else {
        for (int i = el_counter; i > 0; i--) {
            swap(points[i], points[i - 1]);
        }
        points[0] = point;
        el_counter++;
    }

}

Figure::~Figure() {
    delete[] points;
    cout << "Deleting points[]" << endl;
}

Point *Figure::getPoints() const {
    return points;
}

Figure::Figure(const Figure &figure) {
    size = figure.size;
    el_counter = figure.el_counter;

    points = new Point[size];
    for (int i = 0; i < el_counter; i++) {
        points[i] = figure.points[i];
    }
}

Figure &Figure::operator=(const Figure &figure) {
    if (this != &figure) {
        delete[] points;              // destroy storage in this
        points = nullptr;             // preserve invariants in case next line throws
        points = new Point[figure.size]; // create storage in this
        size = figure.size;
        el_counter = figure.el_counter;
        for (int i = 0; i < el_counter; ++i) {
            points[i] = figure.points[i];
        }
    }
    return *this;
}

int Figure::getEl_counter() const {
    return el_counter;
}

Point &Figure::operator[](int index) const {
    if (index < el_counter && index >= 0) {
        return points[index];
    } else
        throw IndexOutOfBoundException();
}
